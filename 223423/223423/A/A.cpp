#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d", x)
#define pf(x) printf("%.6f", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int main() {
	int hh, mm;
	sd(hh), sd(mm);

	int h, d, c, n;
	sd(h), sd(d), sd(c), sd(n);



	// BUY ALL FOOD NOW
	double priceNow = ceil((double)h / n) * c;

	int minsTo20 = 0;
	if (hh < 20) minsTo20 = max(19 - hh, 0) * 60 + (60 - mm);

	h += minsTo20 * d;
	double price2000 = ceil((double)h / n) * c * 0.8;


	pf(min(price2000, priceNow));

	// BUY ALL FOOD 20 00


}