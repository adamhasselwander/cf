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
int xx1, yy1, x2, y2;
void bfs(int x, int y, int depth) {

	if (x == x2 && y == y2) {
		pd(depth);
		exit(0);
	}

	if (visited[x][y]) return;
	visited[x][y] = 1;

	int maxx = min(x + k + 1, n);
	rep(i, x + 1, maxx)
		if (grid[y][i]) {
			if (!visited[i][y]) q.push({ i - 1, y, depth + 1 });
			break;
		} else if (i == x2 && y == y2) {
			pd(depth + 1);
			exit(0);
		} else if (!visited[i][y]) q.push({ i, y, depth + 1 });


	int minx = max(x - k, 0);
	revrep(i, minx, x)
		if (grid[y][i]) {
			if (!visited[i][y]) q.push({ i + 1, y, depth + 1 });
			break;
		} else if (i == x2 && y == y2) {
			pd(depth + 1);
			exit(0);
		} else if (!visited[i][y]) q.push({ i, y, depth + 1 });
		
	int maxy = min(y + k + 1, m);
	rep(i, y + 1, maxy)
		if (grid[i][x]) {
			if (!visited[x][i]) q.push({ x, i - 1, depth + 1 });
			break;
		} else if (x == x2 && i == y2) {
			pd(depth + 1);
			exit(0);
		} else if (!visited[x][i]) q.push({ x, i, depth + 1 });

	int miny = max(y - k, 0);
	revrep(i, miny, y)
		if (grid[i][x]) {
			if (!visited[x][i]) q.push({ x, i + 1, depth + 1 });
			break;
		} else if (x == x2 && i == y2) {
			pd(depth + 1);
			exit(0);
		} else if (!visited[x][i]) q.push({ x, i, depth + 1 });

}

int main() {
	sd(n), sd(m), sd(k);

	rep(i, 0, n) {
		rep(j, 0, m) {
			
			char c;
			sc(c);
			if (c == '#') {
				grid[j][i] = 1;
			}
		}
	}
	sd(xx1), sd(yy1), sd(x2), sd(y2);
	xx1--, yy1--, x2--, y2--;

	bfs(xx1, yy1, 0);

	while (!q.empty()) {
		state s = q.front();
		q.pop();
		bfs(s.x, s.y, s.depth);
	}

	pd(-1);
}