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

ll max(ll a, ll b) {
	if (a > b) return a;
	return b;
}

int main() {
	ll a, b;
	ll x, y, z;

	sl(a), sl(b);
	sl(x), sl(y), sl(z);

	ll aa = max(x * 2 + y - a, 0);
	ll bb = max(z * 3 + y - b, 0);

	pl(aa + bb);

}