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

int arr[5200];
bool visited[5200];

bool dfs(int first, int i, int depth) {
	if (arr[i] == first && depth == 3) return true;

	if (visited[i]) return false;
	visited[i] = 1;

	return dfs(first, arr[i], depth + 1);
}


int main() {
	int n;
	sd(n);
	rep(i, 1, n + 1) sd(arr[i]);
	rep(i, 1, n + 1) {
		if (dfs(i, i, 1)) {
			ps("YES");
			return 0;
		}
		memset(visited, 0, n + 1);
	}
	ps("NO");
}