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

char arr[20];

int main() {
	ss(arr);
	int n = strlen(arr);

	rep(i, 0, 10) {
		bool qp = true;
		rep(j, 0, (n + i) / 2) {
			if (arr[j] != arr[n + i - j - 1]) {
				qp = false;
				break;
			}
		}
		if (qp) {
			ps("YES");
			return 0;
		}
		revrep(j, 0, n + i) arr[j + 1] = arr[j];
		arr[0] = '0';
	}
	ps("NO");
}