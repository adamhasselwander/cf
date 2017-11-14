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

int g[6][4], c[4];

int solve(bool print = false) {
	int comp = 0;

	rep(i, 0, 6) {
		int cc = g[i][0];
		rep(j, 1, 4) {
			if (g[i][j] != cc) cc = -1;
		}
		c[i] = cc;
	}

	rep(i, 0, 6) {
		if (c[i] != -1) comp++;
	}
	if (comp == 6 && print) {
		ps("yes");
		exit(0);
	}
	return comp;
}

int main() {
	rep(i, 0, 6) rep(j, 0, 4) sd(g[i][j]);

	if (solve() == 2) {

		if (c[0] != -1 && c[2] != -1) {
			// c[1] // first 2
			// c[4], c[5], c[3]
			swap(g[1][0], g[4][0]);
			swap(g[1][1], g[4][1]);

			swap(g[4][0], g[5][0]);
			swap(g[4][1], g[5][1]);

			swap(g[5][0], g[3][0]);
			swap(g[5][1], g[3][1]);

			solve(true);

			swap(g[1][0], g[4][0]);
			swap(g[1][1], g[4][1]);

			swap(g[4][0], g[5][0]);
			swap(g[4][1], g[5][1]);

			swap(g[5][0], g[3][0]);
			swap(g[5][1], g[3][1]);

			swap(g[1][0], g[4][0]);
			swap(g[1][1], g[4][1]);

			swap(g[4][0], g[5][0]);
			swap(g[4][1], g[5][1]);

			swap(g[5][0], g[3][0]);
			swap(g[5][1], g[3][1]);

			solve(true);
		}
		
		if (c[1] != -1 && c[5] != -1) {
			// c[0] 2 3, c[3] 1 3, c[2] 0 1, c[4] 0 2

			swap(g[0][2], g[3][1]);
			swap(g[0][3], g[3][3]);

			swap(g[2][0], g[3][1]);
			swap(g[2][1], g[3][3]);

			swap(g[2][0], g[4][2]);
			swap(g[2][1], g[4][0]);

			solve(true);

			swap(g[0][2], g[3][1]);
			swap(g[0][3], g[3][3]);

			swap(g[2][0], g[3][1]);
			swap(g[2][1], g[3][3]);

			swap(g[2][0], g[4][2]);
			swap(g[2][1], g[4][0]);

			swap(g[0][2], g[3][1]);
			swap(g[0][3], g[3][3]);

			swap(g[2][0], g[3][1]);
			swap(g[2][1], g[3][3]);

			swap(g[2][0], g[4][2]);
			swap(g[2][1], g[4][0]);

			solve(true);
		}

		if (c[3] != -1 && c[4] != -1) {
			// c[0] 0 2, c[1] 0 2, c[2] 0 2, c[5] 1 3

			swap(g[0][0], g[1][2]);
			swap(g[0][2], g[1][0]);

			swap(g[1][0], g[2][0]);
			swap(g[1][2], g[2][2]);

			swap(g[2][0], g[5][3]);
			swap(g[2][2], g[5][1]);

			solve(true);

			swap(g[0][0], g[1][2]);
			swap(g[0][2], g[1][0]);

			swap(g[1][0], g[2][0]);
			swap(g[1][2], g[2][2]);

			swap(g[2][0], g[5][3]);
			swap(g[2][2], g[5][1]);

			swap(g[0][0], g[1][2]);
			swap(g[0][2], g[1][0]);

			swap(g[1][0], g[2][0]);
			swap(g[1][2], g[2][2]);

			swap(g[2][0], g[5][3]);
			swap(g[2][2], g[5][1]);

			solve(true);
		}
	}
	
	ps("no");
}