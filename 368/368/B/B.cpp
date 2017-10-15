#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <unordered_set>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d\n", x)
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

int dp[100001];
int arr[100000];

unordered_set<int> distinct;
int main() {
	int n;
	sd(n);

	int m;
	sd(m);

	rep(i, 0, n) {
		int t;
		sd(t);
		arr[i] = t;
	}

	revrep(i, 0, n) {
		dp[i] = dp[i + 1];

		if (distinct.find(arr[i]) == distinct.end()) {
			distinct.emplace(arr[i]);
			dp[i] += 1;
		}
	}




	dp[n] = dp[n + 1];

	rep(i, 0, m) {
		int l;
		sd(l);
		l--;
		pd(dp[l]);
	}
	

}




