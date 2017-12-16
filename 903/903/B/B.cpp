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


vector<bool> strike;

int main() {
	int h1, a1, c1; sd(h1), sd(a1), sd(c1);
	int h2, a2; sd(h2), sd(a2);


	while (h2 > 0)
	{
		if (a1 >= h2) {
			strike.emplace_back(true);
			h2 -= a1;
		}
		else if (a2 >= h1) {
			strike.emplace_back(false);
			h1 += c1;
		}
		else {
			strike.emplace_back(true);
			h2 -= a1;
		}
		h1 -= a2;
	}



	pd(strike.size());
	ps("");
	for (bool s : strike) {

		if (s) ps("STRIKE");
		else ps("HEAL");

	}

}