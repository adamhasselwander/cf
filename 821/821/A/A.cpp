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

int arr[50][50];

int main() {

	int n;
	sd(n);

	rep(i, 0, n) {
		rep(j, 0, n) {
			sd(arr[i][j]);
		}
	}

	rep(i, 0, n) {
		rep(j, 0, n) {

			int a = arr[i][j];
			if (a == 1) continue;

			bool ok = false;
			rep(k, 0, n) {
				if (k == j) continue;
				rep(l, 0, n) {
					if (l == i) continue;
					int b = arr[i][k];
					int c = arr[l][j];

					if (c + b == a) ok = true;
				}
			}
			if (!ok) {
				ps("No");
				return 0;
			}

		}
	}

	ps("Yes");

}