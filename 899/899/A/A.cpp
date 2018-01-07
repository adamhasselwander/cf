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

int arr[200000];
int main() {
	int n;

	sd(n);
	rep(i, 0, n) sd(arr[i]);
	sort(arr, arr + n);

	int si = 0, ei = n - 1;
	int ans = 0;
	while (true) 
	{
		if (ei != si && arr[ei] == 2 && arr[si] == 1) {
			ans++;
		}
		else if (ei - 1 > si && arr[ei] == 1 && arr[si] == 1 && arr[si] == 1) {
			ans++;
			si++;
		}
		else { // both are twos, can't merge any more.
			break;
		}
		si++, ei--;
	}

	pd(ans);
}