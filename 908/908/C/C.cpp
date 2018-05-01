#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
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

struct pos {
	long double x, y;
};

vector<pos> balls;

int main() {

	int n, rr;
	sd(n), sd(rr);
	long double r = rr;

	rep(i, 0, n) {

		int t;
		sd(t);

		long double x = t;
		long double y = r;
		long double d = r * 2;
		for (pos ball : balls) {
			
			if (abs(ball.x - x) <= 2 * r) {
				long double y1 = sqrt(d * d - (ball.x - x) * (ball.x - x)) + ball.y;
				y = max(y1, y);
			}

		}
		balls.push_back({ x, y });
		printf("%.10Lf ", y);

	}

}