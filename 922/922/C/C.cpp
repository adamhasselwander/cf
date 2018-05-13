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


map<ll, bool> nums;

//bool test(int n, int k) {
//	map<int, int> nums;
//	rep(i, 1, k + 1) {
//		int num = n % i;
//		if (nums[num]) return false;
//		nums[num]++;
//	}
//	return true;
//}

int main() {
	ll n, k;
	sl(n), sl(k);

	rep(i, 1LL, min(k + 1, 100LL)) { // could probably do log2(k) here.
		ll num = n % i;
		if (nums[num]) {
			ps("No");
			return 0;
		}
		nums[num] = 1;
	}
	ps("Yes");

	//int maxk = 0;
	//int maxn = 0;
	//rep(i, 1, 10000) {
	//	rep(j, 1, 1000) {
	//		if (test(i, j)) {
	//			pd(i);
	//			ps(" ");
	//			pd(j);
	//			ps("\n");
	//			maxk = max(maxk, j);
	//			maxn = max(maxn, i);
	//		}
	//	}
	//}

}