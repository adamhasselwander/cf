#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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

vector<int> v[200010];
int vals[200010];
int res[200010];
bool visited[200010];
vi divs;
int cnt[200010];


int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

void dfs2(int n, int p) {
	if (visited[n]) return;
	visited[n] = 1;

	res[n] = gcd(vals[n], res[p]);
	
	for (int a : v[n]) {
		if (visited[a]) continue;
		dfs2(a, n);
	}
}

void dfs(int n, int dd) {
	if (!visited[n]) return;
	visited[n] = 0;

	int b = 0;
	for (int d : divs) {
		cnt[d] += vals[n] % d == 0;
		if (cnt[d] >= dd) b = d;
	}

	res[n] = max(res[n], b);

	for (int a : v[n]) {
		if (!visited[a]) continue;
		dfs(a, dd + 1);
	}

	for (int d : divs) {
		cnt[d] -= vals[n] % d == 0;
	}
}

int main() {
	int n;
	sd(n);
	rep(i, 0, n) sd(vals[i]);

	rep(i, 0, n - 1) {
		int x, y;
		sd(x), sd(y);
		x--, y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	int w = 0;
	swap(w, vals[0]);
	dfs2(0, 0);
	swap(w, vals[0]);

	for (int i = 1; i + i <= vals[0]; i++)
		if (vals[0] % i == 0)
			divs.emplace_back(i);

	divs.emplace_back(vals[0]);

	dfs(0, 0);


	rep(i, 0, n) {
		pd(res[i]);
	}

}