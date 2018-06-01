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

struct screen {
	int f, c, i;
};

screen arr[3000];

screen res[3000][3];

int arr2[3000][3000][3];

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		int f;
		sd(f);
		arr[i].f = f;
		arr[i].i = i;
	}
	rep(i, 0, n) {
		int c;
		sd(c);
		arr[i].c = c;
	}


	int res = INT_MAX / 2;
	bool found = 0;
	rep(i, 1, n - 1) {
		screen bb, ba, curr = arr[i];
		bb.c = ba.c = INT_MAX;

		rep(j, 0, i + 1) {
			if (curr.f > arr[j].f && bb.c > arr[j].c) {
				bb = arr[j];
			}
		}
		rep(j, i + 1, n) {
			if (curr.f < arr[j].f && ba.c > arr[j].c) {
				ba = arr[j];
			}
		}

		if (bb.c != INT_MAX && ba.c != INT_MAX) {
			res = min(res, ba.c + bb.c + curr.c);
			found = 1;
		}
	}
	if (!found) pd(-1);
	else pd(res);
}