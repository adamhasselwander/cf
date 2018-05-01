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

struct c {
	int a, d;
} cand[200000];


bool comp(c a, c b) {
	return a.d < b.d;
}

bool comp2(c a, c b) {
	return a.a < b.a;
}

int getClosestSquare(int a) {
	int s = sqrt(a);
	return min(a - s * s, (s + 1) * (s + 1) - a);
}

int main() {
	int n;
	sd(n);

	int squares = 0;
	rep(i, 0, n) {
		int a, d;
		sd(a);
		d = getClosestSquare(a);
		cand[i] = { a, d };
		squares += !d;
	}

	sort(cand, cand + n, comp);

	if (squares == n / 2) {
		pd(0);
	} else if (squares > n / 2) {
		ll res = 0;
		sort(cand, cand + n, comp2);

		revrep(i, 0, n) {
			if (cand[i].d != 0) continue;
			
			if (cand[i].a == 0) res += 2;
			else res += 1;

			squares--;
			if (squares == n / 2) break;
		}

		pl(res);
	}
	else {
		ll res = 0;
		rep(i, 0, n) {
			if (cand[i].d == 0) continue;
			res += cand[i].d;

			squares++;
			if (squares == n / 2) break;
		}

		pl(res);
	}
}