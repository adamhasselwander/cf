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

const int len = 500;

int bits[len];
int bits2[len];

// convert to bits, solve easiest way for each bit
int main() {
	ll n;
	int k;
	sl(n), sd(k);

	int count = 0;
	int count2 = 0;
	int offset = len / 2; // negative numbers

	rep(i, (ll)0, 64) {
		if (n & (1LL << i)) {

			bits[i + offset] = 1;
			count++;
		}
	}

	if (count > k) {
		ps("No");
		return 0;
	}

	ll res = 0;
	memcpy(bits2, bits, sizeof(bits));
	count2 = count;
	int highest = 0;
	while (k > count) {

		revrep(i, 0, len) {
			if (bits[i]) {
				bits[i]--;
				bits[i - 1] += 2;
				count++;
				highest = i - !(bits[i] > 0);
				break;
			}
		}
	}
	memcpy(bits, bits2, sizeof(bits2));
	count = count2;

	while (k > count) {
		bool f = true;
		revrep(i, 0, len) {
			if (i == highest) break;
			if (bits[i]) {
				f = false;
				bits[i]--;
				bits[i - 1] += 2;
				count++;
				break;
			}
		}
		if (f) break;
	}

	ps("Yes\n");
	ll minnum = 0;
	bool f = false;
	revrep(i, 0, len) {
		if (bits[i]) {
			bits[i]--;

			if (f) {
				pd(minnum);
				ps(" ");
			}

			f = true;
			minnum = i - offset;
			i++;
		}
	}

	while (k > count) {
		minnum--;
		pd(minnum);
		ps(" ");
		count++;
	}
	pd(minnum);

}