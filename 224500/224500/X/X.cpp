#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pc(x) printf("%c", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

char a[100010];
char b[100010];
char c[100010];

int aa[256];
int bb[256];
int cc[256];


int main() {
	cin >> a >> b >> c;

	int an = 0, bn = 0, cn = 0;
	while (a[an]) an++;
	while (b[bn]) bn++;
	while (c[cn]) cn++;
	
	rep(i, 0, an) aa[a[i] - 'a']++;
	rep(i, 0, bn) bb[b[i] - 'a']++;
	rep(i, 0, cn) cc[c[i] - 'a']++;

	int bestb = 0;
	int bestc = 0;

	rep(i, 0, an / bn) {

		bool stop = 0;
		rep(j, 0, 'z' - 'a' + 1) {
			if (aa[j] - bb[j] * i < 0) {
				stop = 1;
				break;
			}
		}

		if (stop) break;

		int minc = 1000000;
		rep(j, 0, 'z' - 'a' + 1) if (cc[j]) minc = min(minc, (aa[j] - bb[j] * i) / cc[j]);
		
		if (minc + i > bestb + bestc) {
			bestc = minc;
			bestb = i;
		}

	}

	string s = "";
	rep(x, 0, bestb) s += b;
	rep(x, 0, bestc) s += c;
	rep(x, 0, 'z' - 'a' + 1) s += string(aa[x] - bb[x] * bestb - cc[x] * bestc, x + 'a');

	cout << s;
}