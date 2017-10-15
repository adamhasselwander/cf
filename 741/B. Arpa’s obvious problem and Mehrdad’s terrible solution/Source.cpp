#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <map>

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
ll exists[1000000] = {};


int main() {
	ll n, x;
	sl(n); sl(x);

	rep(i, 0, n) {
		sd(arr[i]);
		exists[arr[i]]++;
	}

	ll score = 0;
	rep(i, 0, n) {
		ll t = arr[i] ^ x;
		if ((x && exists[t]) || (!x && exists[t] > 1)) score += exists[t] - !x;
	}

	pl(score / 2);
}