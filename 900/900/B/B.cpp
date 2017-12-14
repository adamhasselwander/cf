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
	int a, b, c;
	sd(a), sd(b), sd(c);
	a *= 10;
	int m = 1;
	while (m < 1000000)
	{
		if (a >= b) {
			int d = a / b;
			a = (a % b) * 10;
			if (d == c) {
				pd(m);
				return 0;
			}
		}
		else {
			a *= 10;
			if (c == 0) {
				pd(m);
				return 0;
			}
		}

		m++;
		
	}

	pd(-1);

}