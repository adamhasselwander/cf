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


int grid[10][10];


bool check()
{
	// Horizontal + vertical
	int hcount = 0, vcount = 0;
	rep(i, 0, 10) {
		rep(j, 0, 10) {
			if (grid[i][j] == 1) hcount++;
			else hcount = 0;

			if (hcount >= 5) {
				return true;
			}

			if (grid[j][i] == 1) vcount++;
			else vcount = 0;

			if (vcount >= 5) {
				return true;
			}
			
		}
		hcount = 0, vcount = 0;
	}


	// Diagonaly
	hcount = 0, vcount = 0;
	int hcount2 = 0, vcount2 = 0;
	rep(ii, 0, 10) {
		int i = ii;
		rep(jj, 0, 10) {
			int j = jj;
			rep(xyz, 0, 10) {

				if (grid[i][j] == 1) hcount++;
				else hcount = 0;

				if (hcount >= 5) {
					return true;
				}

				if (grid[j][i] == 1) vcount++;
				else vcount = 0;

				if (vcount >= 5) {
					return true;
				}


				if (grid[9 - i][j] == 1)
					hcount2++;
				else hcount2 = 0;

				if (hcount2 >= 5) {
					return true;
				}

				if (grid[j][9 - i] == 1) vcount2++;
				else vcount2 = 0;

				if (vcount2 >= 5) {
					return true;
				}

				i++;
				j++;
				if (i >= 10 || j >= 10) break;
			}
			i = ii;
			hcount = 0, vcount = 0;
			hcount2 = 0, vcount2 = 0;
		}
	}

	return false;

}

int main() {


	rep(i, 0, 10) {
		rep(j, 0, 10) {
			char c;
			sc(c);

			grid[i][j] = c == 'X' ? 1 : (c == '.' ? 0 : 2);

		}
	}

	rep(i, 0, 10) {
		rep(j, 0, 10) {

			if (grid[i][j] != 0) continue; // if not empty continue;

			if ((i > 0 && grid[i - 1][j] == 1) ||
				(i < 9 && grid[i + 1][j] == 1) ||
				(i < 9 && j < 9 && grid[i + 1][j + 1] == 1) ||
				(i < 9 && j > 0 && grid[i + 1][j - 1] == 1) ||
				(i > 0 && j < 9 && grid[i - 1][j + 1] == 1) ||
				(i > 0 && j > 0 && grid[i - 1][j - 1] == 1) ||
				(j < 9 && grid[i][j + 1] == 1) ||
				(j > 0 && grid[i][j - 1] == 1) || true) {
				// Some close cross, AKA we should put one here.

				grid[i][j] = 1;
				if (check()) {
					ps("YES");
					return 0;
				}
				grid[i][j] = 0;

			}

		}
	}


	ps("NO");

}