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

int speeds[200000];
int si = 0;

int main() {

	int n;
	sd(n);

	int currentSpeed = 400;
	int overSigns = 0;
	int singsMissed = 0;

	rep(i, 0, n) {
		int t;
		sd(t);

		switch (t) {
		case 1:
			int s;
			sd(s);

			currentSpeed = s;
			break;
		case 2:
			singsMissed += overSigns;
			overSigns = 0;
			break;
		case 3:
			int ss;
			sd(ss);

			speeds[si++] = ss;
			break;
		case 4: // He never misses this sign

			overSigns = 0;
			break;
		case 5: // He never misses this sign
			si = 0;
			currentSpeed = -1;
			break;
		case 6:

			overSigns++;
			break;
		}

		for (int i = si - 1; i >= 0; i--) {
			if (speeds[i] > currentSpeed) {
				break;
			}
			si--;
			singsMissed++;
		}
	}


	pd(singsMissed);

}