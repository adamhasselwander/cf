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

int arr[200000], dis[200000];
pii diff[200000];


int main() {
	int n, m;
	sd(n); sd(m);

	rep(i, 0, n) sd(arr[i]);
	rep(i, 0, n) {
		sd(dis[i]);
		diff[i] = { arr[i] - dis[i], i };
	}

	sort(diff, diff + n);

	int res = 0;
	rep(i, 0, m) res += arr[diff[i].second];

	rep(i, m, n) {
		if (diff[i].first > 0) res += dis[diff[i].second];
		else  res += arr[diff[i].second];
	}
	
	pd(res);
}