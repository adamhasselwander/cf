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

char arr[101];
int main() {
	int n;
	sd(n);

	int q= 0;
	bool broken = 0;
	bool two = 0;
	rep(i, 0, n) {
		sc(arr[i]);

		if (i > 0 && arr[i] == arr[i - 1] && arr[i] != '?') broken = 1;

		if (arr[i] == '?') {
			q++;
		}
		else {
			if (q >= 2) {
				two = 1;
			}
			else if (q == 1) {
				if (arr[i - 2] == arr[i]) two = 1;
			}

			q = 0;
		}
	}

	if (arr[0] == '?' || arr[n - 1] == '?') two++;

	if (broken) ps("No");
	else if (two) ps("Yes");
	else ps("No");

}