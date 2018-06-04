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

vector<int> arr[200000];

map<int, pii> res; // reach sum first by  

int main() {
	int k;
	sd(k);
	rep(i, 0, k) {
		int n;
		sd(n);
		int sum = 0;
		rep(j, 0, n) {
			int a;
			sd(a);
			sum += a;
			arr[i].push_back(a);
		}

		rep(j, 0, n) {
			sum -= arr[i][j];

			if (res.count(sum)) {

				auto ans = res[sum];
				if (ans.first != i) {
					ps("YES\n");
					pd(i + 1);
					ps(" ");
					pd(j + 1);
					ps("\n");
					pd(ans.first + 1);
					ps(" ");
					pd(ans.second + 1);
					return 0;
				}
			}

			if (!res.count(sum)) res[sum] = { i, j };

			sum += arr[i][j];
		}
	}

	ps("NO");

}