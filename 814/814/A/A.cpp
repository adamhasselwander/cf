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

int arr[200];
int arr2[200];

int main() {
	int n, k;
	sd(n), sd(k);

	rep(i, 0, n) sd(arr[i]);

	rep(i, 0, k) sd(arr2[i]);
	
	sort(arr2, arr2 + k, [](int a, int b) { return b < a; });

	rep(i, 0, k) rep(j, 0, n) if (arr[j] == 0) {
		arr[j] = arr2[i];
		break;
	}

	rep(i, 0, n - 1) {
		if (arr[i] > arr[i + 1]) {
			ps("Yes");
			return 0;
		}
	}

	ps("No");
}