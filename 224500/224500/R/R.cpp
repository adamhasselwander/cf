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
	int a, b, c;
	sd(a), sd(b), sd(c);

	//a = e3 + e2, // e3 = bonds 1 - 3, e2 = bonds 1 - 2
	//b = (c - e3) + e2, // c - e3 = bonds 2 - 3, e2 = bonds 1 - 2
	//c = (a - e1) + e3, // 

	rep(i, 1, 1000000) {
		int e1 = i;
		int e3 = c - e1;
		int e2 = b - e3;

		if (e1 > 0 && e3 > 0 && e2 > 0) {
			pd(e1);
			pd(e2);
			pd(e3);
		}

	}


	//e1 = a - e2;
	//e2 = b - e3;
	//e3 = c - e1;

	//e1 = a - (b - e3);

}