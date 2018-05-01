#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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

vi ans;
int main() {

	int n, a, b;
	sd(n), sd(a), sd(b);

	rep(i, 0, n + 1) {
		ll bb = n - (ll)a * i;
		if (bb % (ll)b == 0 && bb >= 0) {
			ps("YES");
			pd(i);
			pd((int)(bb / b));
			ps("");
			return 0;
		}
	}

	ps("NO");

}