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

bool arr[20][20];
bool arr2[20][20];
int n;

void check() {
	bool eq = 1;
	rep(i, 0, n) {
		rep(j, 0, n) {
			eq = eq && arr[i][j] == arr2[i][j];
		}
	}

	if (eq) {
		ps("Yes");
		exit(0);
	}
	
	eq = 1;
	rep(i, 0, n) {
		rep(j, 0, n) {
			eq = eq && arr[i][j] == arr2[n - 1 - i][j];
		}
	}
	if (eq) {
		ps("Yes");
		exit(0);
	}
	
	eq = 1;
	rep(i, 0, n) {
		rep(j, 0, n) {
			eq = eq && arr[i][j] == arr2[i][n - 1 - j];
		}
	}
	if (eq) {
		ps("Yes");
		exit(0);
	}
}

int main() {
	sd(n);

	rep(i, 0, n) {
		rep(j, 0, n) {
			char c;
			sc(c);
			arr[i][j] = c == 'X';
		}
	}
	rep(i, 0, n) {
		rep(j, 0, n) {
			char c;
			sc(c);
			arr2[i][j] = c == 'X';
		}
	}
	check();

	rep(k, 0, 3) {
		rep(i, 0, n) {
			rep(j, i + 1, n) {
				swap(arr2[i][j], arr2[j][i]);
			}
		}
		rep(i, 0, n) {
			rep(j, 0, n / 2) {
				swap(arr2[i][j], arr2[i][n - 1 - j]);
			}
		}
		check();
	}

	ps("No");
}