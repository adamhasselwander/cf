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


int arr[100200];
int dp[200200];

int main() {
	int n;
	sd(n);

	rep(i, 0, n) sd(arr[i]);

	int s, f;
	sd(s); sd(f);
	int d = f - s;

	dp[0] = arr[0];
	rep(i, 1, n * 2 + 10) dp[i] = dp[i - 1] + arr[i % n];
	
	ll sum = 0;
	int res = 1;
	rep(i, 0, n) {

		ll ss = dp[i + d] - dp[i];

		int r = s - ((i + 1) % n);
		while (0 >= r) r += n;

		if (ss > sum) {
			sum = ss;
			res = r;
		}
		else if (ss == sum) {
			res = min(res, r);
		}
	}

	// hour f in zone si
	pd(res);
}