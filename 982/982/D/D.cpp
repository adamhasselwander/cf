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

struct m {
	int a, i;
};

int arr[100000];
m mm[100000];

set<int> added;
map<int, int> groups;

int main() {

	int n;
	sd(n);
	rep(i, 0, n) {
		sd(arr[i]);
		mm[i] = { arr[i], i + 1 };
	}

	sort(mm, mm + n, [](m a, m b) {
		return a.a > b.a;
	});

	added.insert(0);
	added.insert(n + 1);
	groups[n + 1] = 1;

	int ans = INT_MAX;
	int g = 1;
	rep(i, 0, n - 1) {
		m add = mm[i];

		auto it = added.upper_bound(add.i);
		int up = *it;
		int lo = *(--it);
		int diff = up - lo;

		groups[diff]--;
		if (groups[diff] == 0) {
			groups.erase(diff);
		}

		int llo = add.i - lo;
		int uup = up - add.i;

		if (llo > 1) groups[llo]++;
		if (uup > 1) groups[uup]++;

		added.insert(add.i);

		int gg = (*groups.begin()).second;
		if (groups.size() == 1 && gg >= g) {
			if (gg == g)
				ans = min(mm[i + 1].a + 1, ans);
			else
				ans = mm[i + 1].a + 1;
			g = gg;
		}
	}
	if (ans == INT_MAX)
		pd(mm[n - 1].a + 1);
	else
		pd(ans);
}