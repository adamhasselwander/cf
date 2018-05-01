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

vi arr[10100]; // ArrayList<ArrayList<int>>, vector<vector<int>>
int colors[10100];

int res = 1;

void dfs(int n, int c) {
	for (int a : arr[n]) {
			if (colors[a] != c) {
			res++;
		}
		dfs(a, colors[a]);
	}
}

int main() {
	int n;
	sd(n);

	rep(i, 0, n - 1) {
		int a;
		sd(a);
		arr[a - 1].push_back(i + 1);
	}
	
	rep(i, 0, n) sd(colors[i]);

	dfs(0, colors[0]);

	pd(res);
}