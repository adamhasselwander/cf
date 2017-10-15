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


bool isOdd[101];

int main() {

	// if not first and last are odd, return false
	
	int n;
	sd(n);

	rep(i, 0, n) {
		int a;
		sd(a);
		isOdd[i] = a % 2;
	}


	if (isOdd[0] && isOdd[n - 1]) {
		if (n % 2) {
			ps("Yes");
			return 0;
		}
	}

	ps("No");
}