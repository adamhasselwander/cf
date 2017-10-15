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



ll arr[1000000];

int l_n = 0;
ll l_val = 0;
ll ll_val = 0;

ll calc(ll n) {
	if (n == 0) return 1;
	if (n == 1) return 2;
	if (n == l_n) return l_val;
	if (n + 1 == l_n) return ll_val;

	return calc(n - 1) + calc(n - 2);
}


int main() {
	ll n;
	sl(n);
	
	int i = 0;
	ll t = 0;
	
	while (t <= n) {
		
		t = calc(i++);
		l_n = i - 1;
		ll_val = l_val;
		l_val = t;
	}

	pd(i - 2);
}