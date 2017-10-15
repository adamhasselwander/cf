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
	char a, b;
	sc(a);
	sc(b);

	int n;
	sd(n);
	n %= 4;

	char arr[] = { '^', '>', 'v', '<' };

	int ai = 0, bi = 0;
	rep(i, 0, 4) if (arr[i] == a) ai = i;
	rep(i, 0, 4) if (arr[i] == b) bi = i;
	
	bool bb = false, aa = false;

	if ((ai + n) % 4 == bi) bb = true;
	if (((4 + (ai - n)) % 4) == bi) aa = true;

	if (bb && !aa) ps("cw");
	else if (aa && !bb) ps("ccw");
	else ps("undefined");

}