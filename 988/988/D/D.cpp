#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d ", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

int arr[200000];

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		int a;
		sd(a);
		arr[i] = a;
	}

	sort(arr, arr + n);

	int ansSize = 1;
	vector<int> ans = { arr[0] };
	rep(i, 0, n - 1) {

		rep(j, 0, 31) {
			int diff = 1 << j;
			bool first = binary_search(arr + i + 1, arr + n, arr[i] + diff);
			if (first) {
				bool second = binary_search(arr + i + 1, arr + n, arr[i] + diff * 2);
				if (second) {
					pd(3);
					ps("\n");
					pd(arr[i]);
					pd(arr[i] + diff);
					pd(arr[i] + diff * 2);
					return 0;
				}

				if (ansSize < 2) {
					ansSize = 2;
					ans = { arr[i], arr[i] + diff };
				}

			}
		}
	}

	pd(ansSize);
	ps("\n");
	for (int a : ans) pd(a);
	
}