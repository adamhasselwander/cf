#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n)
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define pf(x) printf("%f", x)
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


int cord[60000];
int speed[60000];
int n;

bool evaulate(double t) {
	double L = cord[0] - t * speed[0], R = cord[0] + t * speed[0];

	rep(i, 1, n) {
		L = max(L, cord[i] - t * speed[i]);
		R = min(R, cord[i] + t * speed[i]);
	}
	return R >= L;
}

int main() { // stuck
	sd(n);

	double start = 0, end = 1000000000, mid;

	rep(i, 0, n) sd(cord[i]);
	rep(i, 0, n) sd(speed[i]);

	int times = 0;

	while (true)
	{
		mid = (start + end) / 2;

		if (!evaulate(mid)) {
			start = mid;
		}
		else {
			end = mid;
		}

		if (++times > 20) {
			pf(mid);
			return 0;
		}
	}
}