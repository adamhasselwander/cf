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
	ll a, b;

	sl(a), sl(b);

	ll i = 1;
	int bits = 0;
	while (a > i) {
		i <<= 1; // 00xxx -> 0xxx0
		i += 1; // 0xx0 -> 0xxx
		bits++;
	}
	i >>= 1;
	bits--;
	// 0xxxx =< a

	ll j = 1;
	ll ret = 0;
	while (true) {
		
		ll j = 1;
		for (int counter = 0; counter < bits; counter++)
		{
			ll x = i ^ j;

			if (x >= a && x <= b) {
				ret++;
			}

			j <<= 1;
		}

		bits++;
		i <<= 1;
		i += 1;

		ll m = (1LL << bits);
		if (m > b || 0 > m) {
			pl(ret);
			return 0;
		}
	}

}



