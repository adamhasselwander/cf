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

int arr[101][101];
int main() {
	int n; sd(n);
	rep(i, 0, n) {
		int x1, y1, x2, y2;
		sd(x1), sd(y1), sd(x2), sd(y2);

		rep(x, x1, x2 + 1) {
			rep(y, y1, y2 + 1) {
				arr[x][y]++;
			}
		}
	}

	int sum = 0;
	rep(x, 1, 101) {
		rep(y, 1, 101) {
			sum += arr[x][y];
		}
	}
	pd(sum);
}