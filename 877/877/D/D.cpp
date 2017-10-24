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

struct state {
	int x, y, depth;
};

queue<state> q;
bool grid[1000][1000];
bool visited[1000][1000];

int n, m, k;
int x1, y1, x2, y2;
int bfs(int x, int y, int depth) {

	if (x == x2 && y == y2) {
		pd(depth);
		exit(0);
	}

	if (visited[x][y]) return;
	visited[x][y] = 1;

	bool next = true;
	rep(i, x + 1, min(x + k + 1, m))
		if (grid[i][y]) {
			q.push({ i - 1, y, depth + 1 });
			next = false;
		}
	if (next) q.push({ x + k, y, depth + 1 });

	next = true;
	revrep(i, x - 1, max(x - k - 1, 0))
		if (grid[i][y]) {
			q.push({ i + 1, y, depth + 1 });
		}
	if (next) q.push({ x - k, y, depth + 1 });

	next = true;
	rep(i, y + 1, min(y + k + 1, n))
		if (grid[x][i]) {
			q.push({ x, i + 1, depth + 1 });
			next = false;
		}
	if (next) q.push({ x, y + k, depth + 1 });

	next = true;
	revrep(i, y - 1, max(y - k - 1, 0))
		if (grid[x][i]) {
			q.push({ x, i + 1, depth + 1 });
			next = false;
		}
	if (next) q.push({ x, y - k, depth + 1 });
}

int main() {
	sd(n), sd(m), sd(k);

	rep(i, 0, n) {
		rep(j, 0, m) {
			
			char c;
			sc(c);
			if (c == '.') {
				grid[j][i] = 1;
			}
		}
	}
	sd(x1), sd(y1), sd(x2), sd(y2);

	bfs(x1, y1, 0);

	while (!q.empty()) {
		state s = q.front();
		q.pop();
		bfs(s.x, s.y, s.depth);
	}
}