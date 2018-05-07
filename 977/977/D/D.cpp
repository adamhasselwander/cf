#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d ", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef pair<int, int> pii;

ll arr[200];
map<ll, bool> visited;
int n;

vi curr;

vll dfs(ll num) {
	
	vll empty;

	if (visited[num]) return empty;
	visited[num] = 1;

	if (!binary_search(arr, arr + n, num)) return empty;

	vll a;
	if (num % 3 == 0) {
		a = dfs(num / 3);
	}

	vll b = dfs(num * 2);

	a.insert(a.begin(), num);
	b.insert(b.begin(), num);

	// Maybe we shouldn't take the lognest vector.
	if (a.size() > b.size()) return a;
	else return b;

}

int main() {
	sd(n);

	rep(i, 0, n) sl(arr[i]);

	sort(arr, arr + n);

	rep(i, 0, n) {
		vll res = dfs(arr[i]);
		if (res.size() == n) {

			rep(j, 0, n) {
				pl(res[j]);
			}
			return 0;
		}
		visited.clear();
	}


}