#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <queue>

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


bool colors[200000] = {};
bool visited[200000] = {};
bool v2[200000] = {};

vector<int> v[200000];
queue<pii> qq;


void bfs(int i, int level) {
	if (visited[i]) return;
	visited[i] = 1;

	for (int u : v[i]) {
		if (!visited[u]) qq.push({ u, level + (colors[i] != colors[u]) });
	}
}

int main() {
	int n, t, tt;
	sd(n);

	rep(i, 0, n) sd(colors[i]);


	rep(i, 0, n - 1) {
		scanf("%d%d", &tt, &t); tt--; t--;
		v[t].emplace_back(tt);
		v[tt].emplace_back(t);
	}

	// compress array;
	// bfs and store last val.
	int m = 0, mm = 0;
	pii l = { 0, 1 };
	qq.push(l);
	while (!qq.empty()) {
		l = qq.front();
		qq.pop();
		bfs(l.first, l.second);
		if (l.second > m) m = l.second, mm = l.first;
	}

	memcpy(visited, v2, n);

	pii pi = { mm, 1 };
	qq.push(pi);
	m = 0;
	while (!qq.empty()) {
		pi = qq.front();
		qq.pop();
		if (pi.second > m) m = pi.second;
		bfs(pi.first, pi.second);
	}

	pd(m / 2);
}