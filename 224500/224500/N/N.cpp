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
	ll k, b, n, t;
	sl(k), sl(b), sl(n), sl(t);

	if (k == 1) {

		ll z = 1;

		while (n-- > 0) {
			//z *= k;
			z += b;

			//z = z * k + b;
		}

		ll zz = t;
		ll res = 0;
		while (zz < z) {
			//zz *= k;
			zz += b;

			//zz = zz * k + b;
			res++;
		}

		pl(res);

	}
	else {
		long double ans = log((long double)(b + k - 1) / (long double)(b + (k - 1) * t)) / (long double)log((long double)k) + n;
		if (0 > ans) 
			ans = 0;
		pl((long long)ceil(ans));
	}

}

//int main() {
//	ll k, b, n, t;
//	sl(k), sl(b), sl(n), sl(t);
//
//	//ll z = 1;
//
//	//while (n-- > 0) {
//	//	z = z * k + b; // this overflows.....
//	//}
//	//
//	//ll zz = t;
//	//ll res = 0;
//	//while (zz < z) {
//	//	zz = zz * k + b; // this overflows.....
//	//	res++;
//	//}
//	// g(0) = t, g(n) = g(n-1) * k + b
//
//	// g(n) = (b (k^n - 1))/(k - 1) + k^n
//
//	if (k == 1) {
//		pd(n - 1);
//		return 0;
//	}
//
//
//	long double ans = log((b + k - 1) / (long double)(b + (k - 1) * t)) / (long double)log(k) + n;
//
//	if (0 > ans) ans = 0;
//
//	pl((long long)ceil(ans));
//}