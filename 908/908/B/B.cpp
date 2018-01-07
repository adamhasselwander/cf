#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

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

char commands[102];
char dir[4] = { 'L', 'R', 'U', 'D' };
int n, m;

char grid[50][50];
int goal = 0;

bool dfs(int i, int x, int y) {

	if (i == strlen(commands))
		return false;

	char d = dir[commands[i] - '0'];
	
	switch (d) {
	case 'L':
		x--;
		break;
	case 'R':
		x++;
		break;
	case 'U':
		y++;
		break;
	case 'D':
		y--;
		break;
	}

	if (!(x >= 0 && x < m)) {
		return false;
	}
	else if (!(y >= 0 && y < n)) {
		return false;
	}

	if (grid[y][x] == '#')
		return false;
	if (grid[y][x] == 'E')
		return true;
	
	return dfs(i + 1, x, y);
}

int main() {

	sort(dir, dir + 4);

	sd(n), sd(m);
	int sx, sy;

	rep(i, 0, n) {
		rep(j, 0, m) {
			sc(grid[i][j]);
			if (grid[i][j] == 'S') {
				sx = j;
				sy = i;
				grid[i][j] = '.';
			}
		}
	}

	cin >> commands;
	int score = 0;
	int perms = 0;
	do {
		if (dfs(0, sx, sy)) {
			score++;
		}
		perms++;
	} while (next_permutation(dir, dir + 4));

	

	pd(score);
}