#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d\n", x)
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

bool arr[510][510];
//int cver[510];
int chor[510];

int main() {
	int n, m, q;
	sd(n), sd(m), sd(q);

	rep(i, 0, n) {
		rep(j, 0, m) {
			int a;
			sd(a);
			arr[i][j] = a > 0;
		}
	}

	rep(i, 0, n) {
		int cntmax = 0;
		int cnt = 0;
		rep(j, 0, m) {
			if (arr[i][j]) cnt++;
			else cntmax = max(cntmax, cnt), cnt = 0;
		}
		chor[i] = max(cntmax, cnt);
	}

	//rep(j, 0, m) {
	//	int cntmax = 0;
	//	int cnt = 0;
	//	rep(i, 0, n) {
	//		if (arr[i][j]) cnt++;
	//		else cntmax = max(cntmax, cnt), cnt = 0;
	//	}
	//	cver[j] = max(cntmax, cnt);
	//}

	rep(qi, 0, q) {
		int i, j;
		sd(i), sd(j);
		j--, i--;
		arr[i][j] = !arr[i][j];

		// update row i and column j

		int cntmax = 0;
		int cnt = 0;
		rep(jj, 0, m) {
			if (arr[i][jj]) cnt++;
			else cntmax = max(cntmax, cnt), cnt = 0;
		}
		chor[i] = max(cntmax, cnt);

		//cntmax = 0;
		//cnt = 0;
		//rep(ii, 0, n) {
		//	if (arr[ii][j]) cnt++;  
		//	else cntmax = max(cntmax, cnt), cnt = 0;
		//}
		//cver[j] = max(cntmax, cnt);

		int ans = 0;
		rep(ii, 0, n) ans = max(ans, chor[ii]);
		//rep(jj, 0, n) ans = max(ans, cver[jj]);
		pd(ans);
	}

}