#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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

//int F(int n, int k) {
//
//	int rows = n - k + 1;
//	int b = 1;
//
//	int sum = 0;
//
//	for (int a = rows; a >= 1; a--)
//	{
//		sum += a * b;
//
//		b += n - k + 1;
//	}
//
//	return b;
//}


int a[200000];
int b[200000];
int c[200000];
int d[200000];
int ans[200000];

bool compare(int aa, int bb) {
	return (a[aa] > a[bb]);
}


bool compare2(int aa, int bb) {
	return b[aa] < b[bb];
}

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		sd(a[i]);
	}
	rep(i, 0, n) {
		sd(b[i]);
		c[i] = i;
		d[i] = i;
	}

	sort(c, c + n, compare);
	sort(d, d + n, compare2);

	rep(i, 0, n) {
		// c[i]
		// d[i]
		ans[d[i]] = a[c[i]];
	}


	rep(i, 0, n) {
		pd(ans[i]);
	}

}