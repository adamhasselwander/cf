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


ll arr[14];
ll curr[14];
ll n = 14;

ll clalcscore(int index) {

	ll balls = curr[index];
	curr[index] = 0;
	index += 1;

	rep(i, 0, n) {
		
		ll b = balls / n;
		if (balls % n > i) b += 1LL;
		curr[(i + index) % 14] += b;
		// 14 = 1 for each
	}

	ll res = 0;
	rep(i, 0, n) {
		if (curr[i] % 2LL == 0LL) {
			res += curr[i];	
		}
	}
	return res;
}

int main() {
	rep(i, 0, n) sl(arr[i]);

	ll maxscore = 0;
	rep(i, 0, n) {
		memcpy(curr, arr, sizeof(arr));
		if (arr[i]) maxscore = max(clalcscore(i), maxscore);
	}

	pl(maxscore);

}