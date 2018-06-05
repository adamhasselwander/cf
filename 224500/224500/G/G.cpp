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

	int a, c;
	sd(a), sd(c);
	// a tor b = c
	// what is smallest b?

	int n;
	int e = 1;
	int num = 0;
	while (a > 0 || c > 0) {
		int ar = a % 3;
		int cr = c % 3;

		int br = 0;
		for (; br < 3; br++) if ((ar + br) % 3 == cr) break;

		// a + b = c mod 3, b >= 0

		num += br * e;
		e *= 3;

		a /= 3;
		c /= 3;
	}

	pd(num);
}