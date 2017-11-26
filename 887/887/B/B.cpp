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


int arr[3][6];
bool res[1000];
map<int, int> nums;

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		rep(j, 0, 6) {
			char c;
			sc(c);
			arr[i][j] = c - '0';
			nums[arr[i][j]]++;
		}
	}


	rep(i, 0, 7) {
		rep(j, 0, 7) {
			rep(k, 0, 7) {
				int a = 0;
				if (i != 6) a += arr[0][i];
				if (j != 6 && n > 1) a = a * 10 + arr[1][j];
				if (k != 6 && n > 2) a = a * 10 + arr[2][k];
				res[a] = 1;

				a = 0;
				if (i != 6) a += arr[0][i];
				if (k != 6 && n > 2) a = a * 10 + arr[2][k];
				if (j != 6 && n > 1) a = a * 10 + arr[1][j];
				res[a] = 1;

				a = 0;
				if (j != 6 && n > 1) a += arr[1][j];
				if (i != 6) a = a * 10 + arr[0][i];
				if (k != 6 && n > 2) a = a * 10 + arr[2][k];
				res[a] = 1;

				a = 0;
				if (j != 6 && n > 1) a += arr[1][j];
				if (k != 6 && n > 2) a = a * 10 + arr[2][k];
				if (i != 6) a = a * 10 + arr[0][i];
				res[a] = 1;

				a = 0;
				if (k != 6 && n > 2) a += arr[2][k];
				if (i != 6) a = a * 10 + arr[0][i];
				if (j != 6 && n > 1) a = a * 10 + arr[1][j];
				res[a] = 1;

				a = 0;
				if (k != 6 && n > 2) a += arr[2][k];
				if (j != 6 && n > 1) a = a * 10 + arr[1][j];
				if (i != 6) a = a * 10 + arr[0][i];
				res[a] = 1;
			}
		}
	}

	
	rep(i, 0, 1000) {
		if (res[i] == 0) {
			pd(max(i - 1, 0));
			return 0;
		}
	}

}