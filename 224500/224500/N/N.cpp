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

	ll z = 1;

	while (n-- > 0) {
		z = z * k + b;
	}
	
	ll zz = t;
	ll res = 0;
	while (zz < z) {
		zz = zz * k + b;
		res++;
	}
	// g(0)=t,g(n)=g(n-1)*k + b

	g(n) = x;
	g(y) = x + t;
	pl(res);
}