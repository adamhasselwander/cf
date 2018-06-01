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

bool grid[200][200];
int ans[200][200];

int main() {
	int n, k;
	sd(n), sd(k);
	rep(i, 0, n) {
		rep(j, 0, n) {
			char c;
			sc(c);

			grid[i][j] = c == '.';

		}
	}

	rep(i, 0, n) {
		rep(j, 0, n - k + 1) {

			bool shipfits = 1;
			rep(l, 0, k) {
				if (!grid[i][j + l]) {
					shipfits = 0;
					break;
				}
			}

			if (shipfits) 
				rep(l, 0, k) ans[i][j + l]++;
		}
	}

	rep(i, 0, n - k + 1) {
		rep(j, 0, n) {

			bool shipfits = 1;
			rep(l, 0, k) {
				if (!grid[i + l][j]) {
					shipfits = 0;
					break;
				}
			}

			if (shipfits) 
				rep(l, 0, k) ans[i + l][j]++;
		}
	}

	int res = 0;
	int xr = 0, yr = 0;
	rep(i, 0, n) {
		rep(j, 0, n) {
			if (ans[i][j] > res) {
				res = ans[i][j];
				xr = i;
				yr = j;
			}
		}
	}

	pd(xr + 1);
	ps(" ");
	pd(yr + 1);

}