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

int arr[1000];
int main() {
	int n;
	sd(n);

	rep(i, 0, n) sd(arr[i]);

	// three points will always work
	vi excluded;

	rep(i, 1, n) {
		
		long double k = (arr[i] - arr[0]) / (long double)i;
		excluded.clear();
		rep(j, 1, n) {
			if (j == i) continue;
			long double kk = (arr[j] - arr[0]) / (long double)j;
			if (kk == k) continue;
			excluded.emplace_back(j);
		}
		
		int last = -1;
		if (excluded.size() == 1) {
			ps("YEs");
			return 0;
		}
		else if (excluded.size() == 0) {
			ps("No");
			return 0;
		}

		long double kkk = (arr[excluded[1]] - arr[excluded[0]]) / (long double)(excluded[1] - excluded[0]);

		if (k != kkk) continue;
		bool failed = 0;
		for (int e : excluded) {
			if (last == -1) {
				last = e;
				continue;
			}
			last = e;
			long double kkkk = (arr[e] - arr[excluded[0]]) / (long double)(e - excluded[0]);
			if (kkkk == kkk) continue;
			failed = true;
			break;
		}

		if (failed) continue;

		ps("Yes");
		return 0;
		// calculate equation for line between arr[0] and arr[i]
		// find all intersecting points (x)
		// draw a parallel line from any point not in x
		// find all intersecting points (y)
		// if x + y == n return true



	}

	rep(i, 0, n) {
		if (i == 1) continue;
		long double k = (arr[i] - arr[1]) / (long double)(i - 1);
		excluded.clear();
		rep(j, 0, n) {
			if (j == i || j == 1) continue;
			long double kk = (arr[j] - arr[1]) / (long double)(j - 1);
			if (kk == k) continue;
			excluded.emplace_back(j);
		}

		int last = -1;
		if (excluded.size() == 1) {
			ps("YEs");
			return 0;
		}
		else if (excluded.size() == 0) {
			ps("No");
			return 0;
		}

		long double kkk = (arr[excluded[1]] - arr[excluded[0]]) / (long double)(excluded[1] - excluded[0]);

		if (k != kkk) continue;
		bool failed = 0;
		for (int e : excluded) {
			if (last == -1) {
				last = e;
				continue;
			}
			last = e;
			long double kkkk = (arr[e] - arr[excluded[0]]) / (long double)(e - excluded[0]);
			if (kkkk == kkk) continue;
			failed = true;
			break;
		}

		if (failed) continue;

		ps("Yes");
		return 0;
		// calculate equation for line between arr[0] and arr[i]
		// find all intersecting points (x)
		// draw a parallel line from any point not in x
		// find all intersecting points (y)
		// if x + y == n return true
	}

	ps("No");

}