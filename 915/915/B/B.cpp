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
	int n, pos, l, r;
	sd(n), sd(pos), sd(l), sd(r);


	//int d = min(abs(pos - l), abs(r - pos));

	//if (r == n && l == 1) {
	//	pd(0);
	//}
	//else if (l == 1) {
	//	pd(abs(r - pos) + 1);
	//}
	//else if (r == n) {
	//	pd(abs(pos - l) + 1);
	//}
	//else {

	//}

	int res = 0;
	if (l == pos && l != 1) {
		res = 1;
		l = 1;
	}
	
	if (r == pos && r != n) {
		res += 1;
		r = n;
	}

	if (l == 1 && r == n) {
		pd(res);
	}
	else if (l == 1) {
		pd(res + abs(r - pos) + 1);
	}
	else if (r == n) {
		pd(res + abs(pos - l) + 1);
	}
	else {
		int m = min(abs(pos - l), abs(r - pos)) + 1;
		m += r - l + 1;
		pd(m);
	}
}