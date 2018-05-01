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

ll pow(ll a, ll b) {
	return a * a;
}

int main() {


	int ax, ay, bx, by, cx, cy;
	sd(ax), sd(ay), sd(bx), sd(by), sd(cx), sd(cy);

	if ((ay - by) * (ll)(cx - bx) == (cy - by) * (ll)(ax - bx)) {
		ps("NO");
		return 0;
	}

	if (pow(ax - bx, 2) + pow(ay - by, 2) == pow(bx - cx, 2) + pow(by - cy, 2))
		ps("YES");
	else ps("NO");

}