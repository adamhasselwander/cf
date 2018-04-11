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

vi graph[100020];
bool visited[100020];

ll black = 0, red = 0;
void calc_color_cnt(int u, int depth) {

	if (visited[u]) return;
	visited[u] = 1;

	if (depth % 2) {
		red++;
	}
	else {
		black++;
	}

	for (int v : graph[u]) {
		calc_color_cnt(v, depth + 1);
	}

}

ll max_path_cnt = 0;
void calc_max_path_cnt(int u, int depth) {

	if (visited[u]) return;
	visited[u] = 1;

	int edges = graph[u].size();

	if (depth % 2) {
		max_path_cnt += red - edges;
	}
	else {
		max_path_cnt += black - edges;
	}

	for (int v : graph[u]) {
		calc_max_path_cnt(v, depth + 1);
	}

}

int main() {

	int n;
	sd(n);

	rep(i, 0, n - 1) {
		int u, v;
		sd(u), sd(v);

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	calc_color_cnt(1, 0);
	memset(visited, 0, sizeof(visited));
	calc_max_path_cnt(1, 1);
	
	pl(max_path_cnt / 2LL);
}