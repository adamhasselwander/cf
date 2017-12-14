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

int arr[500001];
ll dp[500002];
ll dp2[500002];
ll sums[500002];

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		sd(arr[i]);
		dp[i + 1] = dp[i] + arr[i];
	}

	revrep(i, 0, n) {
		dp2[i] = dp2[i + 1] + arr[i];
		sums[i] = sums[i + 1] + (dp2[i] * 3 == dp[n] ?  1: 0);
	}

	//if (dp[n] % 3 != 0) {
	//	// print here.
	//	return 0;
	//}

	//auto bdp = lower_bound(dp, dp + n, dp[n] / 3);

	//while (bdp != dp + n + 1)
	//{
	//	// while binary search finds dp{i] in dp2

	//}

	ll cnt = 0;
	rep(i, 1, n - 1) {
		if (dp[i] * 3 == dp[n]) {

			cnt += (ll)sums[i + 1];
			//rep(j, i + 1, n) {
			//	cnt += dp[i] == (dp[j] - dp[i]);
			//}
		}
	}

	pl(cnt);
}










