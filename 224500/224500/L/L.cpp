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
#define INF 1000000000
unsigned int gcd(unsigned int n1, unsigned int n2) {
	return (n2 == 0) ? n1 : gcd(n2, n1 % n2);
}

void calc(int a, int b, int c, int d, double &ans, int &no, int &de) {
	int no2 = abs(a * d - c * b);
	int de2 = b * d;

	int g2 = gcd(no2, de2);

	no2 /= g2;
	de2 /= g2;

	if (ans == INF || ans > (double)no2 / (double)de2) {
		no = no2;
		de = de2;
		ans = (double)no2 / (double)de2;
	}
}

int main() {
	int a, b, c, d;
	sd(a), sd(b), sd(c), sd(d);

	long double bno = 0;
	long double bde = 0;
	long double bb = INF;
	rep(i, 0, 1000) {
		if ((a + i) * d == c * b) {
			if (bb > i / (long double)b) {
				bb = i / (long double)b;
				bno = i;
				bde = b;
			}
		}
		if (a * (d + i) == c * b) {
			if (bb > i / (long double)c) {
				bb = i / (long double)c;
				bno = i;
				bde = c;
			}
		}
		if (a * d == (c + i) * b) {
			if (bb > i / (long double)d) {
				bb = i / (long double)d;
				bno = i;
				bde = d;
			}
		}
		if (a * d == c * (b + i)) {
			if (bb > i / (long double)a) {
				bb = i / (long double)a;
				bno = i;
				bde = a;
			}
		}
	}

	pd((int)bno);
	ps("/");
	pd((int)bde);
}