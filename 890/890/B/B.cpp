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

int arr[200200];

int main() {
	int n;
	sd(n);
	rep(i, 1, n + 1) {
		int t;
		sd(t);
		arr[t] = i;
	}
	int min_score = 1000000;
	int min_index = 0;
	rep(i, 0, 200200) {
		if (min_score > arr[i] && arr[i]) {
			min_score = arr[i];
			min_index = i;
		}
	}
	pd(min_index);
}