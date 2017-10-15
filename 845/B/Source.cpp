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


int a[10];
int b[10];

int c[10];
int d[10];
int main() {
	
	int s1 = 0, s2 = 0;
	rep(i, 0, 6) {
		char c;
		sc(c);
		
		if (i > 2) {
			b[i - 3] = c - '0';
			s2 += b[i - 3];
		}
		else {
			a[i] = c - '0';
			s1 += a[i];
		}
	}

	sort(a, a + 3);
	sort(b, b + 3);

	int diff = s1 - s2;

	if (diff == 0) {
		pd(0);
		return 0;
	}

	if (diff < 0) {
		rep(i, 0, 6) {
			swap(a[i], b[i]);
		}
		diff = -diff;
	}

	int ret = 0;

	while (diff) {
		ret++;
		int m = 0, mi = 0, mm = 0, mmi = 0;

		rep(i, 0, 3) {
			if (9 - b[i] > m) {
				mi = i;
				m = 9 - b[i];
			}
		}

		rep(i, 0, 3) {
			if (a[i] > mm) {
				mmi = i;
				mm = a[i];
			}
		}

		if (mm > m) {
			a[mmi] = 0;
		}
		else {
			b[mi] = 9;
		}

		diff -= min(max(m, mm), diff);

	}
	
	pd(ret);
}