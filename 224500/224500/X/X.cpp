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


void print(int minb, int minc) {
	rep(i, 0, minb) ps(b);
	rep(i, 0, minc) ps(c);
}

void calc(int &minb, int &minc) {
	minb = 1000000, minc = 1000000;
	rep(i, 0, 256) {
		if (bb[i]) minb = min(minb, aa[i] / bb[i]);
		if (cc[i]) minc = min(minc, aa[i] / cc[i]);
	}
	int minb2 = 1000000, minc2 = 1000000;
	rep(i, 0, 256) {
		if (bb[i]) minb2 = min(minb2, (aa[i] - (cc[i] ? minc * cc[i] : 0)) / bb[i]);
		if (cc[i]) minc2 = min(minc2, (aa[i] - (bb[i] ? minb * bb[i] : 0)) / cc[i]);
	}
	if (minb2 + minc > minc2 + minb) {
		minb = minb2;
	}
	else {
		minc = minc2;
	}
}

int main() {
	ss(a), ss(b), ss(c);

	int an = strlen(a), bn = strlen(b), cn = strlen(c);

	rep(i, 0, an) aa[a[i]]++;
	rep(i, 0, bn) bb[b[i]]++;
	rep(i, 0, cn) cc[c[i]]++;

	int minb;
	int minc;

	calc(minb, minc);
	print(minb, minc);

	rep(i, 0, 256) {
		if (bb[i]) aa[i] -= minb * bb[i];
		if (cc[i]) aa[i] -= minc * cc[i];
	}

	rep(i, 0, 256) rep(j, 0, aa[i]) pc(i);

}