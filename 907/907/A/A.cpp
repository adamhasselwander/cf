#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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


int main() {
	int v1, v2, v3, vm;
	sd(v1), sd(v2), sd(v3), sd(vm);

	int rv1 = v1 * 2;
	int rv2 = v2 * 2;
	int rv3 = -1;

	rep(i, 1, 200) {
		if (i >= v3 && v3 * 2 >= i) {
			if (i >= vm && vm * 2 >= i) {
				if (v2 > i && rv2 > vm * 2) {
					rv3 = i;
					break;
				}
			}
		}
	}

	if (rv3 != -1) {
		pd(rv1), pd(rv2), pd(rv3);
	}
	else {
		pd(-1);
	}
}