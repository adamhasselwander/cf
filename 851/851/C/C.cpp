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

#define PI 3.14159265

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int arr[20][5];
int res[20];

int ab[5];
int ac[5];

int mul(int x, int y) {
	int res = 0;
	rep(i, 0, 5) res += arr[x][i] * arr[y][i];
	return res;
}

int main() {
	int n;
	sd(n);
	if (n > 12) {
		pd(0);
		return 0;
	}

	if (n == 2) {
		pd(2);
		ps("\n");
		pd(1);
		ps("\n");
		pd(2);
		return 0;
	}

	rep(i, 0, n) rep(j, 0, 5) sd(arr[i][j]);

	rep(a, 0, n) {
		rep(b, 0, n) {
			rep(c, 0, n) {
				if (a == b || a == c || c == b) continue;

				rep(i, 0, 5) ab[i] = arr[b][i] - arr[a][i];
				rep(i, 0, 5) ac[i] = arr[c][i] - arr[a][i];

				long double numerator = 0;
				rep(i, 0, 5) numerator += ab[i] * ac[i];
				long double denom1 = 0;
				rep(i, 0, 5) denom1 += ab[i] * ab[i];
				long double denom2 = 0;
				rep(i, 0, 5) denom2 += ac[i] * ac[i];


				long double denom = sqrt(denom1) * sqrt(denom2);

				long double deg = acos(numerator / denom) * 180 / PI;

				if (deg < 90) 
					res[a] = true;
			}
		}
	}

	rep(i, 0, n) {
		if (!res[i]) {
			pd(1);
			ps("\n");
			pd(i + 1);
			return 0;
		}
	}
	pd(0);
}