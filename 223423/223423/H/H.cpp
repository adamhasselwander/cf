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
	ll n;
	int k;

	sl(n), sd(k);
	int bi = 0;
	ll b = 0;
	ll r = LLONG_MAX;
	rep(i, 0, k) {
		ll a;
		sl(a);
		ll boxes = n / a;
		ll res = n - boxes * a;
		if (res < r) {
			r = res;
			b = boxes;
			bi = i + 1;
		}

	}

	// x*a1 + y*a2 + z*a3 + ....
	pd(bi);
	ps(" ");
	pl(b);

}