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

// https://math.stackexchange.com/questions/972784/how-do-i-detect-whether-a-rational-number-has-a-repetend-when-expressed-with-a-d

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {

	int n;
	sd(n);
	rep(i, 0, n) {
		ll p, q, b;
		sl(p), sl(q), sl(b);

		ll gg = gcd(p, q);

		p /= gg;
		q /= gg;

		// prime factor b and q
		// make sure all factors in q is in b
		ll g = gcd(q, b);
		while (g > 1) {
			while (q % g == 0) q /= g;
			g = gcd(q, b);
		}

		if (q == 1) ps("Finite\n");
		else ps("Infinite\n");

	}

}