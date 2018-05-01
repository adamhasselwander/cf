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

#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

int n;
ll cnr[1020][1020]; // There is most likley an overflow somewhere
int arr[1020];
bool binary[1010];
char str[1010];
int k;

void init_cnr() {
	rep(i, 0, 1010) {
		cnr[i][0] = 1LL;
		cnr[i][i] = 1LL;
	}

	rep(i, 2, 1001) {
		rep(j, 1, i) {
			cnr[i][j] = (cnr[i - 1][j - 1] + cnr[i - 1][j]) % 1000000007LL;
		}
	}
}

int calc_k(int n) {
	int i = 0;
	while (n > 1)
	{
		n = __builtin_popcount(n);
		i++;
	}
	return i;
}

ll add_bits(int len, int depth) {

	ll res = 0;
	rep(i, 1, 1001) {
		if (0 > i - depth) continue;

		if (arr[i] == k - 1) {
			ll nr = cnr[len][i - depth];
			res += nr;
			res %= (ll)1000000007;
		}
	}
	return res;
}

ll calc(int len, int depth) {
	if (!binary[len] && len == 0)
		return 0;

	binary[len] = 0;
	ll res = add_bits(len, depth);

	while (binary[len] == 0 && len > 0) len--;

	return res + calc(len, depth + 1);
}

int main() {

	init_cnr();

	ss(str);	
	sd(k);

	n = strlen(str);

	if (k == 0) {
		pd(1);
		return 0;
	}

	rep(i, 1, 1010) arr[i] = calc_k(i);
	int ones = 0;
	rep(i, 0, n) {
		binary[n - i - 1] = str[i] == '1';
		if (binary[n - i - 1]) ones++;
	}


	ll res = calc(n - 1, 0);

	if (k == 1) res--;
	if (arr[ones] == k - 1) res++;

	pl(res % 1000000007LL);
}