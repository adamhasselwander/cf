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


int blen = 0;
bool old[500];
int main() {
	int n, m;
	sd(n); sd(m);
	char c;
	rep(i, 0, n) {
		int len = 0;
		bool arr[500];
		rep(j, 0, m) {
			sc(c);
			len += c =='X';
			arr[j] = c == 'X';
		}

		if (blen == 0) {
			blen = len;
			memcpy(old, arr, 500 * sizeof(bool));
		}
		else if (len == 0) {
			blen = -1;
		}
		else if (blen != len) {
			ps("NO");
			return 0;
		}
		else if (memcmp(old, arr, 500 * sizeof(bool)) != 0) {
			ps("NO");
			return 0;
		}
	}
	ps("YES");
	
}