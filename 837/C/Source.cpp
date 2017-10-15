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


struct rect {
	int x, y, i;
};


rect rects[202];

int main() {
	int n, w, h;
	sd(n), sd(w), sd(h);

	rep(i, 0, n * 2) {

		sd(rects[i].x);
		sd(rects[i].y);
		rects[i + 1].x = rects[i].y;
		rects[i + 1].y = rects[i].x;

		rects[i].i = rects[i + 1].i = i;

		i++;
	}

	int best = 0;

	rep(i, 0, n * 2) {
		rep(j, 0, n * 2) {

			if (rects[i].i == rects[j].i) continue;

			if (rects[i].x > w || rects[j].x > w) continue;
			if (rects[i].y > h || rects[j].y > h) continue;

			if (rects[i].x <= w - rects[j].x || rects[i].y <= h - rects[j].y) {
				best = max(best, rects[i].x * rects[i].y + rects[j].x * rects[j].y);
			}

		}
	}

	pd(best);

}