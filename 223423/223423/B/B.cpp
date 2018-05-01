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


int alph[256];
char arr[100000];
int main() {

	ss(arr);
	int n = strlen(arr);

	rep(i, 0, n) {
		alph[arr[i]]++;
	}

	int gm1 = 0;
	int gm2 = 0;
	int groups = 0;

	rep(i, 0, 256) {
		if (alph[i]) {
			groups++;
		}
		if (alph[i] >= gm1) {
			gm2 = gm1;
			gm1 = alph[i];
		}
		else if (alph[i] >= gm2) {
			gm2 = alph[i];
		}

	}

	if (groups == 4) ps("YES");
	else if (groups == 3 && gm1 > 1) ps("YES");
	else if (groups == 2 && gm1 > 1 && gm2 > 1)  ps("YES");
	else ps("NO");
}