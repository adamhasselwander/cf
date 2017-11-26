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

int arr[100000];
int visited[100000];
vi res;

int dfs(int i, int d) {
	if (visited[i]) return d;
	visited[i] = 1;

	return dfs(arr[i], d + 1);
}

int main() {
	int n;
	sd(n);
	rep(i, 0, n) {
		sd(arr[i]);
		arr[i]--;
	}

	rep(i, 0, n) {
		if (!visited[i]) res.emplace_back(dfs(i, 0));
	}
	sort(res.rbegin(), res.rend());
	
	if (res.size() == 1) res.emplace_back(res[0]);
	else res[1] += res[0];

	ll ans = 0;
	rep(i, 1, res.size()) {
		ll m = res[i];
		ans += m * m;
		m = 0;
	}

	pl(ans);
}

