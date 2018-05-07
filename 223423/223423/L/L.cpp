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

int dp[2000][4];
int twos[4] = { 1,2,1,2 };

int arr[2000];
int ai = 0;
int main() {
	int n;
	sd(n);

	int a;
	sd(a);

	bool twos = a == 2;
	int curr = a, cnt = 1;

	rep(i, 1, n) {
		sd(a);
		if (a == curr) cnt++;
		else {
			arr[ai++] = cnt;
			curr = a;
			cnt = 1;
		}
	}


	rep(i, 0, 4) {

		rep(i, 0, ai) {
			if (twos) {

			}
			else {

			}
		}
		twos = !twos;
	}

}