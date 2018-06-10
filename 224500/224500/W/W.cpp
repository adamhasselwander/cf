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


struct s {
	int r, i, p;
};

s arr[2000];

int main() {
	int n; sd(n);
	rep(i, 0, n) {
		int p;
		sd(p);
		arr[i] = { p, i, 0 };
	}

	sort(arr, arr + n, [](s a, s b) {
		return a.r > b.r;
	});

	int cnt = 0;
	int last = -1;
	int p = 1;
	rep(i, 0, n) {
		if (last != arr[i].r) {
			p += cnt;
			cnt = 0;
			last = arr[i].r;
		}

		arr[i].p = p;
		cnt++;
	}

	sort(arr, arr + n, [](s a, s b) {
		return a.i < b.i;
	});

	rep(i, 0, n) pd(arr[i].p);

}