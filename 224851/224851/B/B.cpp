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

struct diagonal {
	int x, y, a, b;
};

pii xy[300];
diagonal diag[300];
diagonal biggest[4];

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		int xx, yy;
		sd(xx), sd(yy);
		xy[i] = { xx, yy };
	}

	// 300^4 is way too many computations

	//double kk = 0;
	//rep(a, 0, n) {
	//	rep(b, 0, n) {
	//		rep(c, 0, n) {
	//			rep(d, 0, n) {
	//				int acx = x[c] - x[a];
	//				int acy = y[c] - y[a];

	//				int bdx = x[d] - x[b];
	//				int bdy = y[d] - y[b];

	//				// if any two points are on a line skip them
	//				if (acx == 0 || acy == 0 || bdx == 0 || bdy == 0) continue;

	//				double k = 0.5 * abs(acx * bdy - bdx * acy);
	//				kk = max(kk, k);
	//			}
	//		}
	//	}
	//}

	// Alternative solution
	// pos pos, pos neg, neg pos, neg neg (4)
	// find these four biggest, and try them against every other diagonal

	rep(a, 0, n) {
		rep(b, 0, n) {

			pii bb = xy[b];
			pii aa = xy[a];

			int diagx = bb.first - aa.first;
			int diagy = bb.second - aa.second;

			// skip if they are on a line (aka not a diagonal)
			if (diagx == 0 || diagy == 0) continue;

			if (diag > 0) {
				if (diagy > 0) {

				}
				else {

				}
			}
			else {
				if (diagy > 0) {

				}
				else {

				}
			}
		}
	}


	int ax2 = 0, ay2 = 0;
	int ans = 0;
	rep(big, 0, 4) {

		rep(a, 0, n) {
			rep(b, 0, n) {
	
				pii bb = xy[b];
				pii aa = xy[a];

				int diagx = bb.first - aa.first;
				int diagy = bb.second - aa.second;

				// skip if they are on a line (aka not a diagonal)
				if (diagx == 0 || diagy == 0) continue;

				if (ans < abs(biggest[big].x * diagy - diagx * biggest[big].y)) {
					ans = abs(biggest[big].x * diagy - diagx * biggest[big].y);
				}
			}
		}
	}

	printf("%.1f", 0.5 * ans);
}