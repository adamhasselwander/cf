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

int bits[100];

// convert to bits, solve easiest way for each bit
int main() {
	ll n;
	int k;
	sl(n);
	sd(k);

	int index = 0;
	int count = 0;
	int totalCount = 0;
	int first = -1;

	for (ll i = 0; i < 64; i++)
	{
		if (n & (1LL << i)) {
			if (first == -1) first = i;

			totalCount++;
			index = i;
			bits[i] = totalCount;
		}
	}

	if (totalCount > k) {
		ps("No");
		return 0;
	}

	ll res = 0;

	while (true) {

		if (n & (1LL << ((ll)index))) count += 1;

		if (k - totalCount < count) { // <= ?

			ps("Yes\n");
			rep(i, 0, count) pd(index), ps(" ");

			break;
		}

		totalCount += count;
		count *= 2;
		index--;

	}

	for (ll i = index - 1; i >= 0; i--) {
		if (bits[i]) {
			pd(i);
			ps(" ");
		}
	}

	first = min(first, index);
	while (k - 1 > totalCount) {
		totalCount += 1;

		pd(--first);
		ps(" ");
	}

	pd(first);

}