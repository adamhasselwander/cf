#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d ", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

ll arr[200000];
int room;

int main() {
	int n, m;
	sd(n), sd(m);
	rep(i, 0, n) {

		ll a;
		sl(a);
		arr[room++] = a;
	}

	ll tot = 0;
	ll dorm = 0;
	room = 0;
	rep(i, 0, m) {
		ll index;
		sl(index);

		while (tot + arr[dorm] < index) {
			tot += arr[dorm];
			dorm++;
		}

		pl(dorm + 1);
		pl(index - tot);
		ps("\n");
	}

}