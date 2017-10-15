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


int arr[100];
int pre[100][100] = {};

int main() {
	int n, m, l, r;
	sd(n); sd(m);

	rep(i, 0, n) sd(arr[i]);

	rep(i, 0, n) {
		int tot = 0;
		rep(j, i, n) {
			tot += arr[j];
			pre[i][j] = tot;
		}
	}

	int res = 0;
	rep(i, 0, m) {
		sd(l); sd(r); l--; r--;
		if (pre[l][r] > 0) res += pre[l][r];
	}

	pd(res);
}