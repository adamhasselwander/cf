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

int stairs[100000];
int elevators[100000];

int main() {
	int n, m, cntstairs, cntelevators, v;
	sd(n), sd(m), sd(cntstairs), sd(cntelevators), sd(v);

	rep(i, 0, cntstairs) sd(stairs[i]);
	rep(i, 0, cntelevators) sd(elevators[i]);

	sort(stairs, stairs + cntstairs);
	sort(elevators, elevators + cntelevators);

	int q;
	sd(q);

	rep(i, 0, q) {
		int x1, y1, x2, y2;
		sd(y1), sd(x1), sd(y2), sd(x2);

		if (x1 > x2) {
			swap(x1, x2);
			swap(y1, y2);
		}

		int* su = upper_bound(stairs, stairs + cntstairs, x2);
		int* eu = upper_bound(elevators, elevators + cntelevators, x2);

		int* sl = su - 1;
		int* el = eu - 1;

		int res = INT_MAX;

		if (cntstairs > 0) {

			int d = INT_MAX;
			if (sl != stairs - 1) d = min(d, abs(x1 - *sl) + abs(x2 - *sl));
			if (su != stairs + cntstairs) d = min(d, abs(x1 - *su) + abs(x2 - *su));

			int s = abs(y1 - y2) + d;

			// calculate stair score
			res = min(res, s);
		}

		if (cntelevators > 0) {

			int d = INT_MAX;

			if (el != elevators - 1) d = min(d, abs(x1 - *el) + abs(x2 - *el));
			if (eu != elevators + cntelevators) d = min(d, abs(x1 - *eu) + abs(x2 - *eu));

			int s = ceil(abs(y1 - y2) / (double)v) + d;

			// calculate stair score
			res = min(res, s);
		}

		if (y1 == y2) {
			res = abs(x1 - x2);
		}

		pd(res);

	}

}