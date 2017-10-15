#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;



int arr[100010];
int zarr[100010];
bool visited[100010];

int tosort[100010], ti = 0;
int tosorti[100010], tti = 0;

void solve(int i) {
	if (visited[i]) return;

	tosort[ti++] = zarr[i];
	visited[i] = true;
	solve(zarr[i]);
}


bool compare(int a, int b) {
	return arr[a] < arr[b];
}

int main() {
	int n;
	sd(n);
	

	rep(i, 0, n) {
		sd(arr[i]);
		arr[i];
		zarr[i] = i;
	}
	
	sort(zarr, zarr + n, compare);

	rep(i, 0, n) {
		if (visited[i]) continue;
		
		solve(i);
		tosorti[tti++] = ti;
	}


	int lastti = 0;
	int lastttttttti = 0;
	pd(tti);
	printf("\n");
	rep(i, 0, tti) {
		pd(tosorti[i] - lastttttttti);
		lastttttttti = tosorti[i];
		rep(j, lastti, tosorti[i]) {
			pd(tosort[j] + 1);
		}
		lastti = tosorti[i];
		printf("\n");
	}


}