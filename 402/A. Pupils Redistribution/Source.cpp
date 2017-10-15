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


int arr[6] = {};

int main() {

	int n, a, res = 0, sum = 0;
	sd(n);
	rep(i, 0, n) {
		sd(a);
		arr[a]++;
	}
	rep(i, 0, n) {
		sd(a);
		arr[a]--;
	}

	rep(i, 0, 6) {
		if (abs(arr[i]) % 2 == 1) {
			pd(-1);
			return 0;
		}

		sum += arr[i];
		res += abs(arr[i]);
	}

	if (sum)
		pd(-1);
	else 
	pd(res / 4);
}