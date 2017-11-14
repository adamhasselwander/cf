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


ll choose(int n, ll k) {
	if (k == 0) return 1;
	return (n * choose(n - 1, k - 1)) / k;
}

int main() {
	int n, k;
	sd(n), sd(k);

	ll ans = 1;
	rep(i, 0, k) {
		ll f = 1;
		rep(j, 1, i + 1) f *= j;
		ans += choose(n, i) * f;
	}
	pd(ans);
}