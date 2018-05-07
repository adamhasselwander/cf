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

int visited[200100];
vi graph[200100];

// connected component is a cycle and is unvisited
bool dfs(int node) {
	
	if (visited[node]) return false;
	visited[node] = true;
 
	bool cycle = true;

	if (graph[node].size() != 2) cycle = false;

	for (int n : graph[node]) {
		if (visited[n]) continue;
		bool subcycle = dfs(n);

		if (!subcycle) cycle = false;
	}

	return cycle;
}

int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, m) {
		int a, b;
		sd(a), sd(b);

		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	int cnt = 0;
	rep(i, 1, n + 1) {
		if (dfs(i)) cnt++;
	}

	pd(cnt);
}