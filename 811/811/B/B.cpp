#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s\n", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int arr[10000];
int arr2[10000];

int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, n) sd(arr[i]);

	rep(i, 0, m) {
		int l, r, x;
		sd(l), sd(r), sd(x), x--, l--;

		int k = l;
		rep(j, l, r) {
			if (arr[x] > arr[j]) k++;
			if (k > x) break;
		}

		if (k == x) ps("Yes");
		else ps("No");

	}

}