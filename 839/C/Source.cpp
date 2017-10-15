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


vi cities[100000]; // array of array of int int [][]
int visited[100000];
long double totprob = 0;


void dfs(int node, long double prob, int traveled) {
	int unvisited = 0;

	for (auto c : cities[node]) {
		if (!visited[c]) unvisited++;
	}

	if (unvisited == 0) {
		totprob += (long double)traveled * prob;
		return;
	}

	long double nprob = prob * (1.0L / (long double)unvisited);

	for (auto c : cities[node]) {
		if (!visited[c]) {
			visited[c] = 1;
			dfs(c, nprob, traveled + 1);
			visited[c] = 0;
		}
	}
}

int main() {
	int n;
	sd(n);

	rep(i, 0, n - 1) {
		int u, v;
		sd(u), sd(v);
		u--; v--;
		cities[u].push_back(v);
		cities[v].push_back(u);
	}

	visited[0] = 1;
	dfs(0, 1, 0);
	
	cout.precision(10);
	cout << fixed << totprob << endl;

	// What if n == 0?
}