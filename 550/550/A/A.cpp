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


char s[100000];
int dp[4][100000];
int main() {
	ss(s);

	int n = strlen(s);

	int abi1 = -1;
	int abi2 = -1;

	int bai1 = -1;
	int bai2 = -1;

	rep(i, 0, n - 1) {

		if (s[i] == 'B' && s[i + 1] == 'A') {
			if (bai1 == -1) {
				 bai1 = i;
			}
			else {
				bai2 = i;
			}
		}
		else if (s[i] == 'A' && s[i + 1] == 'B') {
			if (abi1 == -1) {
				abi1 = i;
			}
			else {
				abi2 = i;
			}
		}

	}

	if ((bai2 - abi1 > 1 && bai2 != -1 && abi1 != -1) || 
		(abi2 - bai1 > 1 && abi2 != -1 && bai1 != -1) ||
		(abs(abi1 - bai1) > 1 && abi1 != -1 && bai1 != -1)) {
		ps("YES");
	}
	else {
		ps("NO");
	}

}