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

	ll n, k;
	sl(n), sl(k);
	if (k == 1) {
		pl(n);
		return 0;
	}

	int j = 0;
	revrep(i, 0, 63) {
		if (n & (((ll)1) << i)) {
			j = i;
			break;
		}
	}

	ll res = 1;
	rep(i, 0, j) {
		res <<= 1;
		res += 1;
	}
	
	pl(res);

}