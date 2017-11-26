#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s\n", x)
#define pc(x) printf("%c", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

char arr[101];

char *str[] = {
	"16",
	"24",
	"32",
	"40",
	"48",
	"56",
	"64",
	"72",
	"80",
	"88",
	"96",
};

char *str2[] = {
	"12",
	"36",
	"44",
	"52",
	"76",
	"92",
};

int dp[100][8];

int main() {

	ss(arr);
	int n = strlen(arr);

	rep(i, 0, n) {

		int a = arr[i] - '0';
		dp[i][a % 8] = 1;

		rep(j, 0, 8) {
			dp[i][(j * 10 + a) % 8] = max(dp[i][(j * 10 + a) % 8], dp[i - 1][j]);
			dp[i][(j * 10) % 8] = max(dp[i][(j * 10) % 8], dp[i - 1][j]);
		}

	}














	return 0;

	if (find(arr, arr + n, '8') != arr + n) {
		ps("Yes");
		ps("8");
		return 0;
	}

	if (find(arr, arr + n, '0') != arr + n) {
		ps("Yes");
		ps("0");
		return 0;
	}

	rep(j, 0, 11) {
		int k = 0;
		rep(i, 0, n) {
			if (arr[i] == str[j][k]) {
				if (k == 1) {
					ps("Yes");
					ps(str[j]);
					return 0;
				}
				k++;
			}
		}
	}

	rep(j, 0, 6) {
		int k = 1;
		revrep(i, 0, n) {
			if (k == -1) {
				if ((arr[i] - '0') % 2 == 1) {
					ps("Yes");
					pc(arr[i]);
					ps(str2[j]);
					return 0;
				}
			}
			else if (arr[i] == str2[j][k]) {
				k--;
			}

		}
	}

	ps("No");

}






