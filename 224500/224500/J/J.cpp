#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d ", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int main() {

	ll x, y;
	sl(x), sl(y);
	ll k = (x > 0) == (y > 0) ? -1 : 1;

	// kx + m = y
	ll m = y - k * x;

	// x = (y - m) / k
	ll x1 = (0 - m) / k;
	ll y1 = 0;

	ll x2 = 0;
	ll y2 = m;

	if (x1 > x2) {
		swap(x1, x2);
		swap(y1, y2);
	}

	pl(x1), pl(y1), pl(x2), pl(y2);
}