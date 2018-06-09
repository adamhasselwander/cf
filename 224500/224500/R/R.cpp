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
	int a, b, c;
	sd(a), sd(b), sd(c);

	//a = e3 + e2, // e3 = bonds 1 - 3, e2 = bonds 1 - 2
	//b = (c - e3) + e2, // c - e3 = bonds 2 - 3, e2 = bonds 1 - 2
	//c = (a - e1) + e3, // 

	rep(i, 0, a + 1) {

		// 1. Guess the first one calculate the other two!

		int e13 = i;
		int e12 = a - i;
		int e23 = b - e12;
		
		if (c == e13 + e23 && e13 >= 0 && e12 >= 0 && e23 >= 0) {
			pd(e12);
			pd(e23);
			pd(e13);
			return 0;
		}

	}

	ps("Impossible");

	//e1 = a - e2;
	//e2 = b - e3;
	//e3 = c - e1;

	//e1 = a - (b - e3);

}