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

int x[1001000];
int y[1001000];

int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, n) sd(x[i]);
	rep(i, 0, m) sd(y[i]);

	int xi = 0;
	int yi = 0;
	int ans = 0;
	while (true)
	{
		int mx = 0;
		int my = 0;
		while (mx != my || mx == 0)
		{
			
			if (mx > my) {
				if (yi == m) {
					pd(ans);
					return 0;
				}

				my += y[yi++];
			}
			else {
				if (xi == n) {
					pd(ans);
					return 0;
				}

				mx += x[xi++];
			}
		}
		ans++;
	}

}