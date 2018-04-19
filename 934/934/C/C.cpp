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

int arr[20010];
int dp[20020];
int di = 10;

int main() {

	int n;
	sd(n);

	rep(i, 0, n) sd(arr[i]);

	int last = arr[0];
	dp[di]++;
	int l = 0, r = 0;
	rep(i, 1, n) {
		if (arr[i] != last) {
			last = arr[i];
			di++;
		}
		dp[di]++;
	}
	di++;

	int best = 0;
	bool two = arr[0] - 1;
	rep(i, 10, di - 2) {
		// 5 2 4 1
		// 1 2 1 2
		// 2 1 1 2

		// 2 1 2 1 2

		int res;
		if (two) {
			res = dp[i - 1] + dp[i] + dp[i + 1] + dp[i + 2];
		}
		else {
			res = max(dp[i] + dp[i + 2] + dp[i + 3],
				      dp[i - 2] + dp[i - 1] + dp[i + 1]);
		}

		best = max(best, res);

		two = !two;
	}

	pd(best);

}