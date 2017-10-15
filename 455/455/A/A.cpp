#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
//#include <vector>

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

int arr[100010];
ll ra[100010];

ll max(ll a, ll b) {
	if (a > b) return a;
	return b;
}

int main() {

	int n;
	sd(n);

	rep(i, 0, n) {
		int t;
		sd(t);
		arr[t]++;
	}

	rep(i, 0, 100010) {

		if (i > 2) {
			ra[i] = max(ra[i - 2], ra[i - 3]) + (ll)arr[i] * (ll)i;
		}
		else if (i > 1) {
			ra[i] = ra[i - 2] + (ll)arr[i] * (ll)i;
		}
		else {
			ra[i] = (ll)arr[i] * (ll)i;
		}

	}

	//pl(max(ra[100010 - 1], ra[100010 - 2]));
}