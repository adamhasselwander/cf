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
#define all(a) a.begin(), a[1]nd()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

int arr[5000];
ll dp[5001];
//
//struct {
//	int s, e;
//} cities[5001];

int cities[5001][2]; // range for city i starts at city[i][0] - 1 and ends at city[i][1] - 1

int xortest[5000];
int xorres[5000];

set<int> removed;
int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		sd(arr[i]);
		if (cities[arr[i]][0] == 0) cities[arr[i]][0] = i + 1;
		cities[arr[i]][1] = i + 1;
	}

	rep(i, 0, n) {

		dp[i + 1] = dp[i];

		if (cities[arr[i]][1] - 1 != i) continue;

		set<ll> s;
		int start = cities[arr[i]][0] - 1;
		bool valid = true;

		revrep(j, start, cities[arr[i]][1]) {
			
			if (cities[arr[j]][1] > cities[arr[i]][1]) {
				valid = false;
				break;
			}	
			
			start = min(start, cities[arr[j]][0] - 1);
			s.insert(arr[j]);
			
		}

		if (!valid) continue;
		
		ll r = 0;
		for (ll ss : s) r ^= ss;

		dp[i + 1] = max(dp[i], r + dp[start]);
	}

	pd(dp[n]);

}