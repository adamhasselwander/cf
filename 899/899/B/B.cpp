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


int months[12 * 4] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                       31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                       31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                       31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int arr[24];

int main() {

	int n;
	sd(n);
	rep(i, 0, n) sd(arr[i]);

	rep(i, 0, 12 * 4) {
		bool f = 1;
		rep(j, 0, n) {
			if (arr[j] != months[(i + j) % (12 * 4)]) {
				f = 0;
			}
		}
		if (f == 1) {
			ps("YES\n");
			return 0;
		}
	}
	ps("NO\n");
}