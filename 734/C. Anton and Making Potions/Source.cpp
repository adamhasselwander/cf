#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d", &n) == 0
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


pii s1[200001];
pii s2[200001];

int main() {
	ll n, x, s, best = -1;
	int m, k;
	scanf("%I64d %d %d %I64d %I64d", &n, &m, &k, &x, &s);

	rep(i, 0, m) sd(s1[i].first);
	rep(i, 0, m) sd(s1[i].second);
	s1[m] = { x, 0 };
	s2[0] = { 0, 0 };
	m++;
	rep(i, 0, k) sd(s2[i + 1].first);
	rep(i, 0, k) sd(s2[i + 1].second);

	rep(i, 0, m) {
		pii *up = upper_bound(begin(s2), begin(s2) + k, s - s1[i].second, [](const int b, pii a) {return b < a.second; });

		if ((*up).second > s - s1[i].second) {
			if (up == begin(s2)) continue;
			up--; // enough mana!
		}

		ll nn = n - (*up).first;
		if (nn * s1[i].first < best || best == -1)
			best = nn * s1[i].first;
	}

	pl(best);
}