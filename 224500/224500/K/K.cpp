#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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

vi res[33];

int main() {
	int n; sd(n);
	rep(i, 0, n) {
		int a; sd(a);
		rep(b, 0, 31) {
			int bn = 1 << b;
			if (a & bn) res[b].push_back(a);
		}
	}

	revrep(b, 0, 31) {
		int sum = -1;
		for (int r : res[b]) {
			if (sum == -1) sum = r;
			else sum = sum & r;
		}

		int bn = 1 << b;
		if (sum % bn == 0) {
			pd(res[b].size());
			ps("\n");
			for (int r : res[b]) pd(r);
			return 0;
		}
	}

	pd(-1);
}