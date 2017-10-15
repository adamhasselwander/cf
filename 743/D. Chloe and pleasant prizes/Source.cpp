#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <queue>

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

vi gifts[200000];
int visited[200000];
long ple[200000];
queue<int> q;
ll score = 0;


int found = -1;
void bfs(int u) {
	if (visited[u]) return;
	visited[u] = 1;

	if (gifts[u].size() > 1) {
		queue<int>().swap(q);
		found = u;
		return;
	}

	for (int v : gifts[u]) {
		if (visited[v]) continue;
		q.push(v);
	}
}

ll dfs(int u) {
	if (visited[u]) return 0;
	visited[u] = 1;

	ll ss, a = 0, b = 0;
	for (int v : gifts[u]) {
		if (visited[v]) continue;

		ss = dfs(v);

		if (ss > a) a = ss;
		else if (ss > b) b = ss;
	}
	
	if (gifts[u].size() > 1 && a + b > score)
		score = a + b;

	return a + b + ple[u];
}

int main() {
	int n, a, b;
	sd(n);
	rep(i, 0, n) sd(ple[i]);

	rep(i, 0, n - 1) {
		sd(a); sd(b); a--; b--;
		gifts[a].emplace_back(b);
		gifts[b].emplace_back(a);
	}

	dfs(1);
	pl(score);
}