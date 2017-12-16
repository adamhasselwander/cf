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

int arr[100];
int main() {
	int n;
	sd(n);

	rep(i, 0, n) sd(arr[i]);

	sort(arr, arr + n);

	int last = arr[0];
	int r = 0;
	int mr = 0;
	rep(i, 1, n) {
		if (arr[i] == last) continue;
		if (arr[i] == last + 1) r++;
		else r = 0;
		mr = max(mr, r);
		last = arr[i];
	}

	if (mr >= 2) ps("YES");
	else ps("NO");


}