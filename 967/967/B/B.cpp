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

int arr[100000];
int main() {
	int n, B, A;
	sd(n), sd(A), sd(B);

	int first;
	sd(first);
	
	int sum = first;
	rep(i, 0, n - 1) {
		sd(arr[i]);
		sum += arr[i];
	}

	sort(arr, arr + n - 1);
	int ai = n - 2;
	int res = 0;
	while ((double)(first * A) / sum < B) {
		sum -= arr[ai];
		ai--;
		res++;
	}

	pd(res);

}