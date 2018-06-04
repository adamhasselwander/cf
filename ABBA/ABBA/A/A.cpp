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
	int n;
	sd(n);
	int zeros = 1;
	int ones = 0;
	
	rep(i, 0, n) {
		char c;
		sc(c);
		if (c == '1') {
			ones++;
			zeros = 0;
		}
		else {
			zeros++;
			ones = 0;
		}
		if (zeros == 3 || ones == 2) {
			ps("No");
			return 0;
		}
	}

	if (zeros == 2) {
		ps("No");
		return 0;
	}

	if (n == 1 && zeros == 1) {
		ps("No");
		return 0;
	}

	ps("Yes");
}