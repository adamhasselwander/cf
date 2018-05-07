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


int arr[200100];
int main() {
	int n, k;
	sd(n), sd(k);
	arr[0] = 1;
	rep(i, 1, n + 1) sd(arr[i]);

	sort(arr, arr + n + 1);

	int num = arr[k];
	if (arr[k] == arr[k + 1]) {
		pd(-1);
	}
	else {
		pd(num);
	}
}