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

	int n, k;
	sd(n), sd(k);


	rep(i, 0, n) {
		sd(arr[i]);
	}

	int s = 0;
	rep(i, 0, k) {
		s += arr[i];
	}

	int b = s, bi = 0;
	rep(i, k, n) {
		s += arr[i] - arr[i - k];
		if (s < b) {
			bi = i - k + 1;
			b = s;
		}
	}

	pd(bi + 1);

}