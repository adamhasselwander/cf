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
	ll k, d, t;
	sl(k), sl(d), sl(t);
	t *= 2;

	// stove turns off after k minutes
	// returns to kitchen after d minutes (turns on)
	// food is done after t * 2, t increase by two per minutes if the stove is on, else one per minute

	// if k == d, return t

	// if k < d 
	//  every d minutes the stow will be on for k minutes and off for d - k minutes, total "readiness" is k * 2 + (d - k)

	// if k > d
	//  every d minutes the stow will be on for k minutes and off for d - k minutes, total "readiness" is k * 2 + (d - k)

	ll tminus = (k / d) * d * 2;
	if (k % d > 0) {
		tminus += (k % d) * 2;
		tminus += (d - (k % d));
	}

	// take away all d in k (k / d) * d
	// k % d minutes left it will be on

	ll timepassed = ceil((long double)k / d) * d * 2;

	ll rem = t % tminus;
	ll res = (t / tminus) * timepassed;

	res += min(rem, k * 2);
	rem -= min(rem, k * 2);
	res += rem * 2;
	
	printf("%.1lf", (double)res / 2.0);
}