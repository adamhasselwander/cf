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
	long double x, y;
	cin >> x >> y;

	if (x == 1 || y == 1) {
		if (x == y) cout << "=";
		else if (x > y) cout << ">";
		else cout << "<";
		return 0;
	}

	long double d1 = y * log(x);
	long double d2 = log(y) * x;

	if (abs(d1 - d2) < .0000001) cout << "=";
	else if (d1 < d2) cout << "<";
	else cout << ">";

}
//
//int main() {
//	long double x, y;
//	cin >> x >> y;
//
//	srand(time(0));
//	while (true) {
//		x = rand() % 200 + 1;
//		y = rand() % 200 + 1;
//
//
//		if (x == 1 || y == 1) {
//			if (x == y) cout << "=";
//			else if (x > y) cout << ">";
//			else cout << "<";
//			//return 0;
//			continue;
//		}
//
//		long double d1 = y / x;
//		long double d2 = log(y) / log(x);
//
//		if (abs(d1 - d2) < .0000001) cout << "=";
//		else if (d1 < d2) cout << "<";
//		else cout << ">";
//
//		long double d11 = pow(x, y);
//		long double d22 = pow(y, x);
//
//		int ans1 = d1 > d2;
//		int ans2 = d11 > d22;
//
//		if (ans1 != ans2) {
//			cout << "error";
//		}
//
//	}
//
//
//
//}