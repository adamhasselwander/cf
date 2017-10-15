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
	int a = 0, b = 0, n;
	sd(n);
	char home[3];
	ss(home);

	rep(i, 0, n) {
		char air[3];
		char air2[3];
		rep(i, 0, 3) sc(air[i]);
		rep(i, 0, 2) sc(air2[i]);
		rep(i, 0, 3) sc(air2[i]);

		if (memcmp(home, air, 3) == 0) a++;
		if (memcmp(home, air2, 3) == 0) b++;
	}

	if (a == b) ps("home");
	else ps("contest");

}



