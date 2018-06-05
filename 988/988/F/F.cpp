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

pii umb2[2010]; int ui = 0;
int intervals2[2010];

int dp[2010]; // dp[x] = min weight at position x

int main() {
	int a, m, n;
	sd(a), sd(m), sd(n);

	rep(i, 0, m) {
		int l, r;
		sd(l), sd(r);
		intervals2[l] = 2;
		intervals2[r] = 1;
	}

	rep(i, 0, n) {
		int u, p;
		sd(u), sd(p);
		umb2[ui++] = { u, p };
	}

	sort(umb2, umb2 + ui, [](pii a, pii b) { return a.first < b.first; });

	rep(i, 0, a + 10) dp[i] = INT_MAX / 2;
	dp[0] = 0;

	rep(u, 0, ui) {
		pii ub = umb2[u];

		int reset = 0;
		revrep(i, 0, ub.first) {
			if (intervals2[i] == 2) // found start of interval meaning that we are in an interval.
				reset = ub.first;
			else if (intervals2[i] == 1) // found end of interval meaning that we are outside an interval and could reduce our score.
				reset = i;
			else
				continue;

			break;
		}

		rep(i, ub.first + 1, a + 1) {
			dp[i] = min(dp[i], dp[reset] + ub.second * (i - ub.first));
		}

	}

	revrep(i, 0, a + 1) {
		if (intervals2[i] != 1) continue;

		if (dp[i] >= INT_MAX / 2) pd(-1);
		else pd(dp[i]);
		break;
	}
}