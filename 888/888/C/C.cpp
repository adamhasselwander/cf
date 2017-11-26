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

int kvalues['z' + 1];
int lastindex['z' + 1];
char arr[100000];
int main() {
	ss(arr);
	int n;
	n = strlen(arr);

	rep(i, 0, n) {
		// 2 - 0 + 1
		int k = i - lastindex[arr[i]] + 1;
		lastindex[arr[i]] = i + 1;
		kvalues[arr[i]] = max(kvalues[arr[i]], k);
	}

	int res = 1000000;
	rep(i, 'a', 'z' + 1) {
		kvalues[i] = max(n - lastindex[i] + 1, kvalues[i]);
		if (kvalues[i] != 0) {
			res = min(kvalues[i], res);
		}
	}

	pd(res);
}