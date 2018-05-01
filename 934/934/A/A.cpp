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


int arr1[60];
int arr2[60];

int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, n) sd(arr1[i]);
	rep(i, 0, m) sd(arr2[i]);
	
	ll ret = 1000000000000001000LL;
	rep(k, 0, n) {
		ll best = -1000000000000001000LL;
		rep(j, 0, m) {
			rep(i, 0, n) {
				if (k == i) continue;
				best = max(best, (ll)arr1[i] * (ll)arr2[j]);
			}
		}
		ret = min(ret, best);
	}



	pl(ret);

}