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

ll comp[200010];
ll warriors[200010];
ll arrows[200010];

int main() {
	int n, q;
	sd(n), sd(q);

	ll totalhealth = 0;
	rep(i, 0, n) sl(warriors[i]);
	rep(i, 0, q) sl(arrows[i]);

	revrep(i, 0, n) totalhealth += warriors[i], comp[n - i - 1] = totalhealth;

	ll health = totalhealth;
	rep(i, 0, q) {

		health -= arrows[i];

		if (health <= 0) health = totalhealth;
		ll* it = lower_bound(comp, comp + n, health);

		pd(it - comp + 1);
		ps("\n");
	}


}