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

ll arr[100000];

int main() {
	ll n, x, k;
	sl(n), sl(x), sl(k);

	rep(i, 0, n) sl(arr[i]);

	sort(arr, arr + n);

	ll score = 0;
	rep(i, 0, n) {

		ll minr = arr[i] - arr[i] % x - k * x;
		ll maxr = minr + x;

		if (k == 0) maxr = arr[i];

		ll *minp = upper_bound(arr, arr + n, minr);
		ll *maxp = upper_bound(arr, arr + n, maxr);

		ll span = maxp - minp;
		if (span > 0) score += span;
	}

	pl(score);
}