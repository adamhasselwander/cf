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

ll gold[100010];
vi friends[100010];
int visited[100010];

ll find_cheapest(int c) {
	ll lowest = gold[c];

	if (visited[c]) return lowest;
	visited[c] = 1;

	for (int cc : friends[c]) {
		lowest = min(find_cheapest(cc), lowest);
	}

	return lowest;
}

int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 1, n + 1) {
		sd(gold[i]);
	}

	rep(i, 0, m) {
		int a, b;
		sd(a), sd(b);

		friends[a].push_back(b);
		friends[b].push_back(a);
	}

	ll res = 0;
	rep(i, 1, n + 1) {
		if (!visited[i]) {
			res += find_cheapest(i);
		}
	}

	pl(res);
}