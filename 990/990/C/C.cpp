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

#define MAXLEN 300010

char tmp[MAXLEN];
int arr[MAXLEN * 2];

int main() {
	int n; sd(n);

	rep(i, 0, n) {
		ss(tmp);

		int m = strlen(tmp);
		int open = 0, closed = 0;

		rep(i, 0, m) {
			if (tmp[i] == '(') open++;
			else if (open > 0) open--;
			else closed++;
		}

		if (open <= 0 || closed <= 0) arr[MAXLEN + open - closed]++;
	}

	ll ans = 0;

	rep(i, 1, MAXLEN + 1)
		if (arr[i])
			ans += (ll)arr[i] * (ll)arr[MAXLEN * 2 - i];

	pl(ans);
}