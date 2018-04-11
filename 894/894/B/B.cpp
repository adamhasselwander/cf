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

ll min(ll a, ll b) {
	if (a > b) return b;
	return a;
}

ll powm(ll b, ll e, ll m) {
	ll res = 1;
	while (e)
	{
		if (e % 2) res = (res * b) % m;

		b = (b * b) % m;
		e /= 2;
	}

	return res;
}

int main() {

	ll n, m, k;
	sl(n), sl(m), sl(k);

	if (k == -1 && m % 2 != n % 2) {
		pd(0);
		return 0;
	}
	// 2^((n-1)*(m-1)) = (2^(n-1))^(m-1)
	ll res = powm(powm(2, n - 1, 1000000007LL), m - 1, 1000000007LL) % 1000000007LL;
	pl(res);

}