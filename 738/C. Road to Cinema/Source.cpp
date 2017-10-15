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
typedef pair<long, long> pll;


pll cars[200000];
int gas[200001];

long n, k, s, t;

long calc(long v) {
	long last = 0;
	long time = 0;
	rep(i, 0, k) {
		long d = gas[i] - last;
		last = gas[i];
		time += d * 2 - min(v - d, d);
	}
	return max(time, t);
}


long binarySearch(long value, long min, long max) {
	while (max > min) {
		int mid = (max + min) / 2;

		int v = calc(mid);

		if (v > value) {
			min = mid + 1;
		}
		else if (v <= value) {
			max = mid;
		}
	}
	return max;
}

int main() {

	sd(n); sd(k); sd(s); sd(t);

	rep(i, 0, n) {
		sd(cars[i].first);
		sd(cars[i].second);
	}

	rep(i, 0, k) sd(gas[i]);
	
	gas[k++] = s;
	sort(begin(gas), begin(gas) + k);
	sort(begin(cars), begin(cars) + n, [](pll a, pll b) { return a.first < b.first; });

	int m = 0;
	rep(i, 1, k) if (gas[i] - gas[i - 1] > m) m = gas[i] - gas[i - 1];

	int val = binarySearch(t, m, 1000000001);
	rep(i, 0, n) {
		if (cars[i].second >= val) {
			pd(cars[i].first);
			return 0;
		}
	}
	pd(-1);
}