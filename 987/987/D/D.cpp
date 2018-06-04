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


int visited[100100];
int res[100100][101];
int arr[100100];
vi paths[100100];

int n, m, k, s;

void bfs(int node) {

	if (visited[node]) return;
	visited[node] = 1;

	res[node][arr[node]] = 0; // move goods of type arr[node] from town node is free of charge!

	for (int v : paths[node]) {
		res[node][arr[v]] = min(res[node][arr[v]], 1); // move goods of type arr[node] from town node is free of charge!
	}

	for (int v : paths[node]) {	
		rep(i, 0, 101) {
			res[v][i] = min(res[v][i], res[node][i] + 1);
		}
	}

}

int main() {

	sd(n), sd(m), sd(k), sd(s);

	memset(res, 1000000, sizeof(res));

	rep(i, 0, n) sd(arr[i]);
	
	rep(i, 0, m) {
		int u, v;
		sd(u), sd(v);
		paths[u].push_back(v);
		paths[v].push_back(u);
	}

	bfs(1);
	
	rep(i, 0, n) {
		sort(res[i], res[i] + 101);
		int sum = 0;
		int sss = s;
		rep(i, 0, 101) {
			if (arr[i] == -1) continue;
			sum += arr[i];
			sss--;
			if (sss == 0) break;
		}
		pd(sss);
		ps(" ");
	}

}