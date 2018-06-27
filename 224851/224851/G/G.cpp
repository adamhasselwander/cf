#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
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


int main() {
	int n, m;
	sd(n), sd(m);

	int minc = 1000, maxc = 0, mine = 1000;
	rep(i, 0, n) {
		int c;
		sd(c);
		minc = min(c, minc);
		maxc = max(c, maxc);
	}

	rep(i, 0, m) {
		int e;
		sd(e);
		mine = min(e, mine);
	}

	int minans = max(maxc, minc * 2);
	if (minans >= mine) pd(-1);
	else pd(minans);

}