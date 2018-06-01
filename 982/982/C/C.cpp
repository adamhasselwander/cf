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

vi graph[100010];
int visited[100010];	
int ans = 0;
int dfs(int node) {

	if (visited[node]) return 0;
	visited[node] = 1;

	int ret = 1;
	for (auto n : graph[node]) {
		int c = dfs(n);
		if (c % 2 == 0 && c > 0) {
			ans++;
		}
		else {
			ret += c;
		}
	}

	return ret;
}

int main() {
	int n;
	sd(n);

	rep(i, 0, n - 1) {
		int a,b;
		sd(a), sd(b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	if (n % 2 == 1) {
		pd(-1);
		return 0;
	}

	dfs(1);
	pd(ans);

}