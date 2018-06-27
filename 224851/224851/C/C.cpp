#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d ", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

ll arr[100000];

ll gcd(ll a, ll b) {
	return (b == 0) ? a : gcd(b, a % b);
}

int main() {

	ll n;
	sl(n);

	rep(i, 0, n) sl(arr[i]);

	sort(arr, arr + n, [](int a, int b) {
		return a < b;
	});

	ll sum = 0;
	rep(i, 0LL, n) sum += i * arr[i] - (n - 1LL - i) * arr[i];

	sum *= 2;

	rep(i, 0, n) sum += arr[i];

	ll g = gcd(sum, n);
	
	sum /= g;
	n /= g;

	pl(sum);
	pl(n);
}