#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <string.h>

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

int rowsb[50];
int rowsw[50];
int colsb[50];
int colsw[50];


ll solve(ll c) {
	return pow((ll)2, c) - 1;
}

int main() {
	int n, m;

	sd(n), sd(m);

	rep(i, 0, n) {
		rep(j, 0, m) {
			int a;
			sd(a);
			if (a == 1) {
				rowsb[i]++;
				colsb[j]++;
			}
			else {
				rowsw[i]++;
				colsw[j]++;
			}
		}
	}

	ll score = 0;

	rep(i, 0, n) {
		
		score += solve((ll)rowsb[i]);
		score += solve((ll)rowsw[i]);

	}

	rep(i, 0, m) {

		score += solve((ll)colsb[i]);
		score += solve((ll)colsw[i]);

	}

	pl(score - n * m);

}