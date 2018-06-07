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

int main() {
	int n, m, s, f;
	sd(n), sd(m), sd(s), sd(f);

	int tt = 1;
	rep(i, 0, m) {
		int t, l, r;
		sd(t), sd(l), sd(r);

		if (s == f) return 0;

		rep(i, 0, t - tt) {
			if (s > f) ps("L"), s--;
			else ps("R"), s++;

			if (s == f) return 0;
		}

		if (l <= s && r >= s) ps("X");
		else if (s > f && !(l <= s - 1 && r >= s - 1)) ps("L"), s--;
		else if (s < f && !(l <= s + 1 && r >= s + 1)) ps("R"), s++;
		else ps("X");

		tt = t + 1;

		if (s == f) return 0;
	}

	while (true) {
		if (s > f) ps("L"), s--;
		else if (s < f) ps("R"), s++;
		if (s == f) return 0;
	}

}