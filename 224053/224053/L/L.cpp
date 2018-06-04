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

char arr1[2000][200];
char arr2[200][2000];
int main() {
	int n, m;
	sd(n);
	sd(m);

	rep(i, 0, n) {
		rep(j, 0, m) {
			char c;
			sc(c);
			arr1[i][j] = c;
		}
	}

	rep(i, 0, m) {
		rep(j, 0, n) {

			char c;
			sc(c);
			arr2[i][j] = c;
		}
	}


	rep(i, 0, n - m + 1) {
		rep(j, 0, n - m + 1) {
			bool found = 1;

			rep(k, 0, m) {

				found = memcmp(&arr1[k + i][0], &arr2[k][j], m) == 0;

				if (!found) break;
			}

			if (found) {
				pd(i + 1);
				ps(" ");
				pd(j + 1);
				return 0;
			}

		}
	}

}