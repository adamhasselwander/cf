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

bool arr[1000];

int main() {
	int n, x;
	sd(n), sd(x);
	rep(i, 0, n) {
		int m;
		sd(m);
		arr[m] = 1;
 	}

	int ans = 0;
	if (arr[x]) {
		ans++;
	}

	rep(i, 0, x) {
		if (!arr[i]) ans++;
	}

	pd(ans);
}