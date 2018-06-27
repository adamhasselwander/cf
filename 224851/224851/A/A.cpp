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

int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b, a % b	);
}

int main() {

	int x, y, a, b;
	sd(x), sd(y), sd(a), sd(b);

	int xy = x * y;
	int g = gcd(x, y);
	xy /= g;

	int fb = floor((double)b / xy);
	int fa = floor((double)(a - 1) / xy);

	pd(fb - fa);

}