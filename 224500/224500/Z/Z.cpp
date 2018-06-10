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
	ll n; sl(n);

	//rep(n, 1, 100000) {

	ll digits = log10(n) + 1;
	ll mod = pow(10LL, digits - 1);
	ll score = 0;
	score += (n - mod + 1LL) * digits;

	digits--;
	ll sum = 0;
	rep(i, 0LL, digits) {
		sum += 9LL * (ll)pow(10LL, (ll)i) * (i + 1LL);
	}

	//ll sum2 = 0;
	//rep(i, 1, n + 1) {
	//	ll d = log10(i) + 1;
	//	sum2 += d;
	//}

	//if (sum2 != score + sum) 
	//	ps("ERROR");
	//}

	pl(score + sum);
}