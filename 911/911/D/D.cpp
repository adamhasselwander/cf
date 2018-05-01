#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s\n", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int arr[1600];

int main() {

	int n;
	sd(n);
	
	rep(i, 1, n + 1) {
		sd(arr[i]);
	}

	ll inv = 0;
	rep(i, 2, n + 1) {
		rep(j, 1, i) {
			if (i > j && arr[i] < arr[j]) {
				inv++;
			}
		}
	}

	int m;
	sd(m);

	rep(i, 0, m) {
		int l, r;
		sd(l), sd(r);

		ll d = r - l;
		ll m = (d * (d + 1)) / 2;

		inv += m;

		if (inv % 2) ps("odd");
		else ps("even");
	}
}