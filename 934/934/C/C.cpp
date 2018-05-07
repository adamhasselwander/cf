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

int arr[2010];
int dp[2020];
int dp2[2020][5];
int di = 0;

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

	bool twos = 0;
	rep(j, 1, 5) {
		bool start = arr[0] == 2;
		rep(i, 0, di) {
			if (start == twos) {
				dp2[i][j] = max(dp2[i - 1][j - 1] + dp[i], dp2[i - 1][j] + dp[i]);
			}
			else {
				dp2[i][j] = max(dp2[i][j - 1], dp2[i - 1][j]);

			}
			start = !start;
		}
		twos = !twos;
	}
	

	pd(dp2[di - 1][4]);

}