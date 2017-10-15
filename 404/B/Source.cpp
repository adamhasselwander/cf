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


int intersect(pii a, pii b) {
	if (a.first > b.first) {
		return max(a.second - b.first, 0);
	}
	else {
		return max(b.second - a.first, 0);
	}
}

int main() {
	int n;
	sd(n);

	pii a, b;
	int t, tt;
	sd(t); sd(tt);
	a = b = { tt, t };

	rep(i, 0, n - 1) {
		sd(t); sd(tt);
		if (b.first > tt) b = { tt, t }; // b = end as early as possible
		if (t > a.second) a = { tt, t }; //  a = start as late as possible
	}
	pii aa = a, bb = b;

	sd(n);

	sd(t); sd(tt);
	a = b = { tt, t };
	rep(i, 0, n - 1) {
		int t, tt;
		sd(t); sd(tt);
		if (b.first > tt) b = { tt, t }; // b = end as early as possible
		if (t > a.second) a = { tt, t }; //  a = start as late as possible
	}

	int res = max(intersect(a, bb), max(intersect(a, aa), max(intersect(b, bb), intersect(b, aa))));
	pd(res);
}