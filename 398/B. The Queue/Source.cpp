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
int cost[100000];


int main() {
	int start, stop, len, n, a;
	sd(start), sd(stop), sd(len), sd(n);

	rep(i, 0, n) {
		sd(arr[i]);
	}

	if (arr[0] > start) {
		pd(start);
		return 0;
	}

	int best = start - arr[0] + len;



	rep(i, 0, n) {
		if (arr[i] == arr[i + 1]) continue;


		if (arr[i + 1] - arr[i] < len) {
			// arr[i] - 1, arr[i], arr[i] + len

		}

	}


}