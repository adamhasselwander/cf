#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d\n", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i <= end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int grid[11][101][101] = { 0 };

int main() {
	long n, q, c;
	sd(n);
	sd(q);
	sd(c);

	int x, y, cc;
	rep(i, 0, n - 1) {
		sd(x);
		sd(y);
		sd(cc);
		grid[cc][x][y]++;
	}


	rep(p, 0, c) {
		rep(i, 1, 100) {
			rep(j, 1, 100) {
				grid[p][i][j] = grid[p][i - 1][j] + grid[p][i][j - 1] - grid[p][i - 1][j - 1] + grid[p][i][j];
			}
		}
	}


	int t, x1, x2, y1, y2;
	rep(i, 0, q - 1) {
		sd(t);
		sd(x1);
		sd(y1);
		sd(x2);
		sd(y2);
		
		int sum = 0;
		rep(p, 0, c) {
			int ammount = (grid[p][x2][y2] - grid[p][x1 - 1][y2] - grid[p][x2][y1 - 1] + grid[p][x1 - 1][y1 - 1]);
			sum += ((p + t) % (c + 1)) * ammount;
		}
		pd(sum);
	}

}