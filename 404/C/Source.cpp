#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d\n", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int main() {
	long long a, b;
	sl(a); sl(b);
	
	if (b >= a) {
		pl(a);
		return 0;
	}

	// (x +5-1)(x+5*2+1))/2-(2*32+5*x)
	//(x +k-1)(x+k*2+1))/2-(2*n+k*x)
	// 2 * k^2 + 3 * k * x - k + x^2 - 1 - 4*n -2*k*x
	// 2 * k^2 + k * x - k + x^2 - 1 - 4*n

	//x^2+5*x+2*5^2-5-1-32*4
	// -k/2 + sqrt((k/2)^2 - 2*k^2 + k + 1 + 4 n)
	// -k/2 + sqrt(-7 * k^2/4 + k + 1 + 4 * n)

	long double n = a, m = b;
	long double x2 = -m / 2 + sqrtl(-7 * m * m / 4  + m + 1 + 2 * n);
	pl((long long)(x2 + b - 1));
}