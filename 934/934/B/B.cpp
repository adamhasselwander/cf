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


// 0 1 2 3 4 5 6 7 8 9

int arr[10]{ 1, 0, 0, 0, 1, 0, 1, 0, 2, 1 };

int main() {
	// max is all 8 which is 18 * 2

	int k;
	sd(k);

	if (k > 18 * 2) {
		pd(-1);
		return 0;
	}

	while (k > 0) {
		if (k >= 2) pd(8);
		else pd(4);
		k -= 2;
	}

}