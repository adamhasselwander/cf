#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int a[1000];
int b[1000];
int c[1000];

int d[2];
int di;
int n;

void validate() {

	int d = 0;
	rep(i, 0, n) d += c[i] != b[i];
	if (d != 1) return;
	d = 0;
	rep(i, 0, n) d += c[i] != a[i];

	set<int> s;
	rep(i, 0, n) s.insert(c[i]);
	
	if (s.size() != n) return;

	if (d == 1) {
		rep(i, 0, n) pd(c[i]);
		exit(0);
	}
}

bool cc[1000];

int main() {

	sd(n);

	rep(i, 0, n) sd(a[i]);
	rep(i, 0, n) sd(b[i]);
	
	rep(i, 0, n) if (a[i] == b[i]) c[i] = a[i]; else d[di++] = i;
	int e = a[d[0]], f = b[d[0]], g = a[d[1]], h = b[d[1]];

	if (di == 1) {
		rep(i, 0, n) cc[c[i]] = 1;
		rep(i, 1, n + 1) if (!cc[i]) e = i;
	}

	int oldC = c[d[0]];
	c[d[0]] = e;
	validate();
	c[d[0]] = f;
	validate();
	c[d[0]] = g;
	validate();
	c[d[0]] = h;
	validate();
	c[d[0]] = oldC;

	c[d[1]] = e;
	validate();
	c[d[1]] = f;
	validate();
	c[d[1]] = g;
	validate();
	c[d[1]] = h;
	validate();

	c[d[0]] = e;
	c[d[1]] = f;
	validate();
	
	c[d[0]] = e;
	c[d[1]] = g;
	validate();

	c[d[0]] = e;
	c[d[1]] = h;
	validate();

	c[d[0]] = f;
	c[d[1]] = g;
	validate();

	c[d[0]] = f;
	c[d[1]] = h;
	validate();

	c[d[0]] = g;
	c[d[1]] = h;
	validate();

}