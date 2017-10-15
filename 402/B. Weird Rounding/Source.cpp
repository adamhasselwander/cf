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


int main() {
	char arr[10], arr2[10];
	int k, res = 0, ai = 0, i;
	ss(arr);
	sd(k);

	for (i = strlen(arr) - 1; i >= 0; i--) {
		if (strlen(arr) - i > k) break;
		if (arr[i] != '0') {
			k++, res++;
		}
		else {
			arr2[ai++] = arr[i];
		}
	}

	for (int j = i; j >= 0; j--) {
		arr2[ai++] = arr[j];
	}
	arr2[ai] = 0;

	for (int i = ai - 1; i >= 1; i--) {
		if (arr2[i] != '0') break;
		res++;
	}

	pd(res);
}