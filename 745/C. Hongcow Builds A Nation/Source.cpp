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


long nodemax[1000];
int govs[1000];
pii nodes[1000]; // first is number of edges second is number of nodes
vector<int> edges[1000] = {};

void dfs(int node, int k) {
	if (nodes[node].first) return;
	if (node != k) nodes[node].first = 1;

	nodes[k].first += edges[node].size();
	nodes[k].second++;

	for (int n : edges[node])
		dfs(n, k);
}

int main() {
	int n, m, k, t, tt;
	sd(n); sd(m); sd(k);
	rep(i, 0, k) sd(govs[i]);

	rep(i, 0, m) {
		sd(t); sd(tt); t--; tt--;
		edges[t].emplace_back(tt);
		edges[tt].emplace_back(t);
	}


	long c = 1;
	rep(i, 1, n) {
		nodemax[i] = c;
		c += i + 1;
	}

	int bestg = 0, bestgi = -1;
	pii total = {};
	rep(i, 0, k) {
		govs[i]--;
		dfs(govs[i], govs[i]);
		nodes[govs[i]].first /= 2;

		total.first += nodes[govs[i]].first;
		total.second += nodes[govs[i]].second;

		if (nodes[govs[i]].second > bestg) {
			bestg = nodes[govs[i]].second;
			bestgi = i;
		}
	}

	nodes[govs[bestgi]].second += n - total.second; // nodes remaining
	nodes[govs[bestgi]].first += m - total.first; // edges remaining

	long score = 0;
	rep(i, 0, k) {
		pii node = nodes[govs[i]];
		score += nodemax[node.second - 1] - node.first;
	}



	pd(score);
}