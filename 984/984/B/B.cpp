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


char arr[100][100];

int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, n) {
		rep(j, 0, m) {
			sc(arr[i][j]);
		}
	}

	rep(i, 0, n) {
		rep(j, 0, m) {

			int realbombs = 0;

			if (i > 0 && arr[i - 1][j] == '*') realbombs++;
			if (j > 0 && arr[i][j - 1] == '*') realbombs++;

			if (n - 1 > i && arr[i + 1][j] == '*') realbombs++;
			if (m - 1 > j && arr[i][j + 1] == '*') realbombs++;
			
			if (i > 0 && j > 0 && arr[i - 1][j - 1] == '*') realbombs++;
			if (n - 1 > i && m - 1 > j && arr[i + 1][j + 1] == '*') realbombs++;
			
			if (i > 0 && m - 1 > j && arr[i - 1][j + 1] == '*') realbombs++;
			if (j > 0 && n - 1 > i && arr[i + 1][j - 1] == '*') realbombs++;
			
			if (arr[i][j] == '.') {
				if (realbombs > 0) {
					ps("NO");
					return 0;
				}
			}
			else if (arr[i][j] != '*') {

				int bombs = arr[i][j] - '0';
				if (bombs != realbombs) {
					ps("NO");
					return 0;
				}
			}
		}
	}

	ps("YES");
}