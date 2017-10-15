#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d\n", x)
#define ps(x) printf("%s\n", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;



char arr[100000];
int dp[100000];

int main() {

	ss(arr);

	int m = strlen(arr);
	
	rep(i, 0, m) {
		int ind = arr[i] == arr[i + 1];
		dp[i + 1] = dp[i] + ind;
	}

	int n;
	sd(n);

	rep(i, 0, n) {
		int a, b;
		sd(a), sd(b);
		a--, b--;

		pd(dp[b] - dp[a]);
	}
}