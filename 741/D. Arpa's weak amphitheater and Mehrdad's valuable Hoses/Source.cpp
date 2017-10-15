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


long weights[2000];
long beau[2000];

vi friends[1000];
vector<pii> groups[1000];
int gi = 0;
int visited[1000] = {};

long dp[1001];
long newdp[1001] = {};
long emptydp[1001] = {};

long gb = 0, gw = 0;

void dfs(int i) {
	if (visited[i]) return;
	visited[i] = 1;
	gb += beau[i];
	gw += weights[i];

	groups[gi].push_back({ beau[i], weights[i] });

	for (int f : friends[i]) dfs(f);
}

long max2(long a, long b) {
	if (a > b) return a;
	return b;
}

int main() {
	int n, m, w;
	sd(n); sd(m); sd(w);

	rep(i, 0, n) sd(weights[i]);
	rep(i, 0, n) sd(beau[i]);

	int a, b;
	rep(i, 0, m) {
		sd(a); sd(b); a--; b--;
		friends[a].push_back(b);
		friends[b].push_back(a);
	}

	rep(i, 0, n) {
		dfs(i);

		if (groups[gi].size() > 1) 
			groups[gi].push_back({ gb, gw });

		if (groups[gi].size() > 0) {
			gi++;
			gb = gw = 0;
		}
	}



	int best = 0;
	rep(i, 0, gi) {
		rep(j, 1, w + 1) {
			newdp[j] = dp[j];
			for (pii g : groups[i]) {
				if (g.second > j) {
					newdp[j] = max(newdp[j], newdp[j - 1]);
				}
				else {
					newdp[j] = max(newdp[j], dp[j - g.second] + g.first);
					if (newdp[j] > best) best = newdp[j];
				}
			}
		}
		memcpy(dp, newdp, (w + 1) * sizeof(long));
		memset(newdp, 0, (w + 1) * sizeof(long));
	}

	pd(best);
}








