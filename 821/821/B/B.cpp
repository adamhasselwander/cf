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
	int m, b;
	sd(m), sd(b);

	ll ans = 0;
	rep(i, (ll)0, sqrt(b)) {
		// find intersection to the right
		// i = y
		// y = -x/m + b;
		// x = -(y - b) * m
		ll j = -(i - b) * m;
		// calc banans here

		ll rsum = (j * (j + 1)) / 2;
		ll usum = (i * (i + 1)) / 2;
		ll banans = rsum * (i + 1) + usum * (j + 1);
		ans = max(ans, banans);

	}
	pl(ans);
}