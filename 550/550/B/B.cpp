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

int arr[15];
int n, l, r, x;
int selected[15];
int si = 0;
int res = 0;

void rec(int index) {

	if (si > 1) {
		bool found = arr[selected[si - 1]] - arr[selected[0]] >= x;
		int d = 0;

		rep(i, 0, si) {
			d += arr[selected[i]];
		}
		
		if (d < l || d > r) found = false;

		res += found;
	}

	rep(i, index, n) {
		selected[si++] = i;
		rec(i + 1);
		si--;
	}
}

int main() {

	sd(n), sd(l), sd(r), sd(x);

	rep(i, 0, n) {
		sd(arr[i]);
	}
	
	sort(arr, arr + n);

	rec(0);

	pd(res);
}