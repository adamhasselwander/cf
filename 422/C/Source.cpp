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

struct vo {
	int l, r, c;
};

vo vos[100001];

bool predi(vo a, vo b) {

	if (a.r - a.l == b.r - b.l) {
		return a.l < b.l;
	}


	return a.r - a.l < b.r - b.l;
}

int main() {
	int n, x;
	sd(n), sd(x);

	int l, r, c;
	rep(i, 0, n) {
		sd(l), sd(r), sd(c);
		vos[i] = { l,r,c };
	}

	sort(vos, vos + n, predi);

	int si = 0, ei = 1, bestc = -1;

	while (ei < n) {


		if ((vos[si].r - vos[si].l) + (vos[ei].r - vos[ei].l) + 2 == x) {

			if (vos[si].r >= vos[ei].l && vos[ei].r >= vos[si].l) {
				si++; // or ei++
				continue;
			}

			if (bestc == -1 || vos[si].c + vos[ei].c < bestc) {
				bestc = vos[si].c + vos[ei].c;
			}

			si++; // or ei++
		}
		else if ((vos[si].r - vos[si].l) + (vos[ei].r - vos[ei].l) + 2 > x) {
			si++;
		}
		else {
			ei++;
		}

	}

	pd(bestc);

}