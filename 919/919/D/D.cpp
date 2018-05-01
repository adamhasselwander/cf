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

int dp[300020][26];
int arr[300020];
int deg[300020];

vi grid[300020];

int max(int a, int b) {
	if (a > b) return a;
	return b;
}

queue<int> q;

int main() {

	int n, m;
	sd(n), sd(m);

	rep(i, 1, n + 1) {
		char c;
		sc(c);
		arr[i] = c - 'a';
	}

	rep(i, 0, m) {
		int a, b;
		sd(a), sd(b);
		grid[a].push_back(b);
		deg[b]++;
	}


	int cnt = 0;
	rep(i, 1, n + 1) {
		if (deg[i] == 0) q.push(i); 
	}

	while (q.size() > 0) {

		int node = q.front();
		q.pop();

		for (int m : grid[node]) {
			rep(i, 0, 26) {
				dp[m][i] = max(dp[m][i], dp[node][i] + (arr[node] == i));
			}
			deg[m]--;
			if (deg[m] == 0) {
				q.push(m);
			}
		}
		cnt++;
	}

	int res = -1;
	if (cnt == n) {
		rep(i, 1, n + 1) {
			rep(j, 0, 26) {
				res = max(res, dp[i][j] + (arr[i] == j));
			}
		}
	}

	pd(res);

}