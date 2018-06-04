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

int umb[2010];
pii umb2[2010]; int ui = 0;

pii intervals[2010]; int ii = 0;
int intervals2[2010];

int dp[2010]; // dp[x] = min weight at position x

int main() {
	int a, m, n;
	sd(a), sd(m), sd(n);

	rep(i, 0, m) {
		int l, r;
		sd(l), sd(r);
		intervals[ii++] = { l, r };
		intervals2[l] = 2;
		intervals2[r] = 1;
	}

	rep(i, 0, n) {
		int u, p;
		sd(u), sd(p);

		if (umb[u]) umb[u] = min(umb[u], p);
		else umb[u] = p;

		umb2[ui++] = { u, p };
	}

	sort(intervals, intervals + ii, [](pii a, pii b) {
		return a.first < b.first;
	});
	
	sort(umb2, umb2 + ui, [](pii a, pii b) {
		return a.first < b.first;
	});

	rep(i, 0, a + 1) dp[i] = INT_MAX;
	
	if (umb2[0].first > intervals[0].first) {
		pd(-1);
		return 0;
	}

	dp[0] = 0;

	rep(u, 0, ui) {
		pii ub = umb2[u];

		int reset = 0;
		revrep(i, 0, ub.first) {
			if (intervals2[i] == 2) { // found start of interval meaning that we are in an interval.
				reset = ub.first;
				break;
			}
			else if(intervals2[i] == 1) { // found end of interval meaning that we are outside an interval and could reduce our score.
				reset = i;
				break;
			}
		}

		if (dp[reset] + ub.second * (a - ub.first) < dp[a]) {

			rep(i, reset, ub.first + 1) dp[i] = dp[reset];

			rep(i, ub.first + 1, a + 1) {
				dp[i + 1] = min(dp[i + 1], dp[i] + ub.second);
			}

		}
		
	}

	revrep(i, 0, a + 1) {
		if (intervals2[i] == 1) {
			pd(dp[i]);
			break;
		}
	}


}