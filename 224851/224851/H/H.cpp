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


vi hotels;

vi graph[100000];
vi rgraph[100000];

int main() {
	int n; sd(n);

	rep(i, 0, n) {
		int t; sd(t);
		if (t) hotels.push_back(i);
	}

	rep(i, 0, n) {
		int a; sd(a);
		if (a == 0) continue;
		// there is a path from a to i + 1
		graph[a - 1].push_back(i);
		rgraph[i].push_back(a - 1);
	}

	vi ans;

	for (int h : hotels) {
		int curr = h;
		vi path = { curr };
		while (true) {
			if (rgraph[curr].size() == 0) break;
			curr = rgraph[curr][0];
			if (graph[curr].size() > 1) break;
			path.push_back(curr);
			if (graph[curr].size() == 0) break;
		}
		if (path.size() > ans.size()) ans = path;
	}

	pd(ans.size());
	ps("\n");
	
	reverse(ans.begin(), ans.end());

	for (int a : ans) pd(a + 1);

}