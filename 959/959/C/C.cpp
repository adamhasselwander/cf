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


int main() {

	// 1
	// n - 1
	
	// 1
	// n - 3
	// 2  to same node

	int n;
	sd(n);
	
	if (n > 5) {
		printf("%d %d\n", 1, 2);
		printf("%d %d\n", 2, 3);
		printf("%d %d\n", 2, 4);
		rep(i, 5, n + 1) {
			printf("%d %d\n", 4, i);
		}
	}
	else {
		pd(-1);
		ps("\n");
	}

	rep(i, 2, n + 1) {
		printf("%d %d\n", 1, i);
	}

}