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


ll arr[3][100000];
int nums[100000];

ll max(ll a, ll b) {
	if (a > b) return a;
	return b;
}

int main() {
	int n, p, q, r;
	sd(n), sd(p), sd(q), sd(r), sd(nums[0]);

	arr[0][0] = nums[0];
	rep(i, 1, n) {
		sd(nums[i]);

		arr[0][i] = max(nums[i] * p, arr[0][i - 1]);
	}

	arr[1][0] = nums[0] * q + arr[0][0];
	rep(i, 1, n) {
		arr[1][i] = max(nums[i] * q + arr[0][i], arr[1][i - 1]);
	}
	
	arr[2][0] = nums[0] * r + arr[1][0];
	rep(i, 1, n) {
		arr[2][i] = max(nums[i] * r + arr[1][i], arr[2][i - 1]);
	}

	pl(arr[2][n - 1]);
}