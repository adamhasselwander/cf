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

unsigned int gcd(unsigned int n1, unsigned int n2) {
	return (n2 == 0) ? n1 : gcd(n2, n1 % n2);
}

int main() {
	int a, b, c, d;
	sd(a), sd(b), sd(c), sd(d);

	// b / a - d / c;
	int no = abs((b * c) - (d * a));
	int de = max((b * c), (d * a));

	int g = gcd(no, de);
	no /= g;
	de /= g;

	pd(no);
	ps("/");
	pd(de);

}