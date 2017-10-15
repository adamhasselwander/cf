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


int days[200000];

int main() {

	int n, k, j = 0;
	sd(n), sd(k);


	int switches = 0;
	int i = 0;
	while (n > i) {
		int t;
		for (; i < n; i++) {
			sd(t);
			if (0 > t) {
				k--;
				switches++;
				i++;
				break;
			}
			days[j]++;
		}


		for (; i < n; i++) {
			sd(t);
			if (0 <= t) {
				j++;
				days[j]++;
				switches++;
				i++;
				break;
			}
			k--;
		}
	}
	if (j) {
		if (j > 1) sort(days + 1, days + j - 1);

		rep(i, 1, j) {
			if (days[i] > k) break;
			k -= days[i];
			switches -= 2;
		}

		if (days[j] <= k) switches -= 1;
	}
	if (0 > k) pd(-1);
	else pd(switches);
}