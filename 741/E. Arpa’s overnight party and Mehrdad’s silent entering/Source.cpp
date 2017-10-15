#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sdd(n, m) scanf("%d%d",&n, &m) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define pdd(x, y) printf("%d %d\n", x, y)
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

const int B = -1, G = 1;

int arr[200000];
char res[200000] = {};
pii ord[100000];

int perms[6][3] = { {G, B, B},{B, G, B},{B, B, G}, {B, G, G}, {G, B, G}, {G, G, B} };
int skip[6] = {};

int l1 = 0, l2 = 0, l3 = 0;
void sw(int v) {
	swap(l2, l3);
	swap(l1, l2);
	l1 = v;
}

void toggle(int i, int v) {
	res[i] = v;
	res[arr[i]] = -v;
	sw(v);
}

bool toggleNext(int i) {
	if (res[i] == 0) {
		toggle(i, -(l1 + l2 + l3));
	}
	else {
		sw(res[i]);
	}

	return abs(l1 + l2 + l3) != 3;
}

int main() {
	int n, a, b;
	sd(n);
	rep(i, 0, n) {
		sdd(a, b); a--, b--;
		arr[a] = b;
		arr[b] = a;
		ord[i] = { a, b };
		if (a > b) swap(a, b);

		if (a == 0 && b == 1) {
			skip[2] = skip[5] = 1;
		}
		else if (a == 0 && b == 2) {
			skip[1] = skip[4] = 1;
		}
		else if (a == 1 && b == 2) {
			skip[0] = skip[3] = 1;
		}
	}
	n *= 2;

	if (n == 2) {
		pdd(1, 2);
		return 0;
	}

	rep(i, 0, 6) {
		if (skip[i]) continue;

		toggle(0, perms[i][0]), toggle(1, perms[i][1]), toggle(2, perms[i][2]);
		bool broke = 0;
		rep(j, 3, n) {
			if (!toggleNext(j)) {
				broke = 1;
				break;
			}
		}
		if (!broke) {
			rep(k, 0, n / 2) pdd(res[ord[k].first] == -1 ? 2 : 1, res[ord[k].second] == -1 ? 2 : 1);
			return 0;
			// print ans
		}
		memset(res, 0, sizeof(int) * n);
		l1 = l2 = l3 = 0;
	}

	pd(-1);
}