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
	ll n, a, b, c;
	sl(n); sl(a); sl(b); sl(c);
	n = 4 - (n % 4);

	if (a * 2 < b) b = a * 2;

	if (a * 3 < c) c = a * 3;

	if (c * 2 < b) b = c * 2;


	if (a + b < c) c = a + b;

	if (c + b < a) a = c + b;


	switch (n) // if a is smallest.
	{
	case 1:
		pl(a);
		break;
	case 2:
		pl(b);
		break;
	case 3:
		pl(c);
		break;
	default:
		pl(0LL);
		break;
	}
}