#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d\n", x)
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


int main() {

	int q;
	sd(q);

	rep(i, 0, q) {
		int a;
		sd(a);

		if (a < 4) {
			pd(-1);
		} else if (a % 2 == 1) {
			a -= 9;
			if (a >= 4 || a == 0) {
				pd((int)floor((double)a / 4.0) + 1);
			}
			else {
				pd(-1);
			}
		}
		else {
			pd((int)floor((double)a / 4.0));
		}

	}
}