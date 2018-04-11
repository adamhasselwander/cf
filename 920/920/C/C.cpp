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

int arr[200010];
bool f[200010];
int main() {
	int n;
	
	sd(n);
	rep(i, 0, n) sd(arr[i]);
	rep(i, 0, n - 1) {
		char c;
		sc(c);
		f[i] = c == '0';
	}

	int j = 0;



	while (true) {

		rep(i, j, n) {
			j = i;
			if (!f[i]) break;
			if (arr[i] != i + 1) {
				ps("NO");
				return 0;
			}
		}

		if (j == n - 1)
			break;

		int k = j;
		rep(i, j, n) {
			k = i;
			if (f[i]) break;
		}

		// sort elements from j to k + 1
		sort(arr + j, arr + k + 1);

		rep(i, j, k + 1) {
			if (arr[i] != i + 1) {
				ps("NO");
				return 0;
			}
		}

		j = k;

	}

	ps("YES");

}