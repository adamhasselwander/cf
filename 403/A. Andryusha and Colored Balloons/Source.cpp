#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sdd(n, m) scanf("%d %d",&n, &m) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pdn(x) printf("%d\n", x)
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


vi path[200001];
int visited[200001];
int color[200001];
int colored[200001];
int uncolored[200001];
int uci = 0;
int cc = 0;
int ced = 1;
queue<int> q;



void colorballoon(int i) {
	if (visited[i]) return;
	visited[i] = true;

	memset(colored, 0, sizeof(int) * 200001);
	uci = 0;

	colored[color[i]] = 1;
	for (int v : path[i]) {
		if (!visited[v] && path[v].size() > 1) q.push(v);

		if (!color[v]) uncolored[uci++] = v;
		else colored[color[v]] = 1;
	}

	int ci = 1;
	rep(i, 0, uci) {
		while (colored[ci] == 1) ci++;
		color[uncolored[i]] = ci;
		ci++;
	}
	ced += uci;

	if (ci > cc) cc = ci - 1;
}


int main() {
	int n, a, b;
	sd(n);

	rep(i, 0, n - 1) {
		sdd(a, b); a--; b--;

		path[a].emplace_back(b);
		path[b].emplace_back(a);
	}

	int c = 1;
	color[0] = c;
	for (int v : path[0]) {
		color[v] = ++c;
		ced++;
	}
	cc = c;

	q.emplace(0);
	while (!q.empty()) {
		int i = q.front();
		q.pop();
		colorballoon(i);
		if (ced == n) break;
	}

	pdn(cc);
	rep(i, 0, n) {
		pd(color[i]);
	}

}