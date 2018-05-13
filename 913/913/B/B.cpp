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


vi nodes[1000];

bool dfs(int node) {

	int leafs = 0;
	for (int n : nodes[node]) {
		if (nodes[n].size() == 0) leafs++;
		else if (!dfs(n)) return false;
	}

	if (leafs < 3)
		return false;
	return true;
}

int main() {
	int n;
	sd(n);

	rep(i, 0, n - 1) {
		int a;
		sd(a);
		nodes[a - 1].push_back(i + 1);
	}
	
	if (dfs(0)) ps("Yes");
	else ps("No");
}