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

int arr[300];
int main() {
	int t;
	sd(t);

	rep(i, 0, t) {
		int n, k;
		sd(n), sd(k);

		rep(i, 0, k) {
			int s;
			sd(s);
			arr[s] = 1;
		}
		int r = 1;

		bool done = 1;
		rep(i, 1, n + 1) {
			if (arr[i]) arr[i] = 1;
			else done = 0;
		}

		while (!done) {
			
			rep(i, 1, n + 1) {
				if (arr[i] == 1 && !arr[i + 1]) {
					arr[i + 1] = 2;
				}
				if (arr[i] == 1 && !arr[i - 1]) {
					arr[i - 1] = 2;
				}
			}

			done = 1;
			rep(i, 1, n + 1) {
				if (arr[i]) arr[i] = 1;
				else done = 0;
			}

			r++;
		}

		pd(r);
		ps("\n");

		memset(arr, 0, sizeof(arr));
	}

}