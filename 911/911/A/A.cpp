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

ll arr[100400];

int main() {

	int n;
	sd(n);

	ll mini = -1;
	rep(i, 0, n) {
		sl(arr[i]);
		if (mini == -1 || arr[i] < mini) mini = arr[i];
	}

	int li = -1;
	int res = 101000;
	rep(i, 0, n) {
		if (arr[i] == mini) {
			if (li != -1) {
				int d = i - li;
				res = min(res, d);
			}
			li = i;
		}
	}

	pl(res);

}