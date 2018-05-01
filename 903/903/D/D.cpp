#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d", x)
#define plu(x) printf("%llu", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

ll arr[200000];
ll sum[200002];

map<int, int> pleasebefastenough;

int main() {
	int n;
	sd(n);
	rep(i, 0, n) {
		sd(arr[i]);
	}

	revrep(i, 0, n) {
		sum[i] = arr[i];
		if (n - 1 > i) sum[i] += sum[i + 1];
	}
	pleasebefastenough[arr[n - 1]]++;
	
	ull rp = 0;
	ull rn = 0;
	revrep(i, 0, n - 1) {
		ll res = 0;
		res += sum[i + 1] - ((ll)(n - 1 - i)) * arr[i];
		pleasebefastenough[arr[i]]++;
		res += pleasebefastenough[arr[i] - 1];
		res -= pleasebefastenough[arr[i] + 1];

		if (res > 0) rp += res;
		else rn += -res;
	}

	if (rn > rp) {
		ps("-");
		plu(rn - rp);
	}
	else {
		plu(rp - rn);
	}

}