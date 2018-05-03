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


int arr[100200];

int main() {
	int n;
	sd(n);

	rep(i, 0, n) sd(arr[i]);

	int s, f;
	sd(s); sd(f);
	int d = f - s;

	ll sum = 0;
	int res = 1;
	rep(i, 0, n) {
		ll ss = 0;
		rep(j, 0, d) {
			if (i + j >= n) break;
			ss += (ll)arr[i + j];
		}

		int r = s;
		int ssi = i;
		while (ssi > 0) {
			ssi--;
			r--;
			if (r == 0) r = n;
		}

		if (ss > sum) {
			sum = ss;
			res = r;
		}
		else if (ss == sum) {
			res = min(res, r);
		}
	}

	// hour f in zone si
	pd(res);
}