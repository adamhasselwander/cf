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
	int x, hh, mm, i = 0;
	sd(x), sd(hh), sd(mm);

	while (true) {
		if (mm % 10 == 7) break;
		if (hh % 10 == 7) break;

		mm -= x;
		if (mm < 0) {
			mm += 60;
			hh--;

			if (hh == -1) hh = 23;
		}

		i++;
	}

	pd(i);
}