#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%lld",&n) == 0
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

	ll l, r, x, y, k;
	sd(l), sd(r), sd(x), sd(y), sd(k);

	// k = a / b
	// k * b = a

	rep(i, x, y + 1) {
		ll ans = k * i;

		if (ans >= l && r >= ans) {
			ps("YES");
			return 0;
		}

		if (ans > r) {
			break;
		}
	}

	ps("NO");

}