#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define ps(x) printf("%s", x)
#define pc(x) printf("%c", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;



int arr[9][9];

int main() {
	
	rep(i, 0, 9) {
		char c;
		rep(j, 0, 9) {
			c = '-';
			while (c != '.' && c != 'o' && c != 'x') sc(c);
			arr[i][j] = c == '.' ? 0 : (c == 'o' ? 1: 2); // 0 = ., 1 = o, 2 = x
		}
	}
	int x, y;
	sd(x), sd(y);
	x--, y--;
	x %= 3;
	y %= 3;

	bool empty = false;


	rep(i, x * 3, x * 3 + 3) {
		rep(j, y * 3, y * 3 + 3) {
			if (arr[i][j] == 0) {
				empty = true;
				break;
			}
		}
	}

	if (empty) {
		rep(i, 0, 9) {
			if (i > 0) pc('\n');
			if (i % 3 == 0 && i > 0) pc('\n');
			rep(j, 0, 9) {
				if (j % 3 == 0 && j > 0) pc(' ');
				if (x * 3 + 3 > i && i >= x * 3 &&
					y * 3 + 3 > j && j >= y * 3) {
					if (arr[i][j] == 0) pc('!');
					else pc(arr[i][j] == 1 ? 'o' : 'x');
				}
				else {
					pc(arr[i][j] == 0 ? '.' : (arr[i][j] == 1 ? 'o' : 'x'));
				}
			}
		}
		pc('\n');
	}
	else {
		rep(i, 0, 9) {
			if (i > 0) pc('\n');
			if (i % 3 == 0 && i > 0) pc('\n');
			rep(j, 0, 9) {
				if (j % 3 == 0 && j > 0) pc(' ');
				pc(arr[i][j] == 0 ? '!' : (arr[i][j] == 1 ? 'o' : 'x'));
			}
		}
		pc('\n');
	}

}