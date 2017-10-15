#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d", x)
#define pf(x) printf("%.7f", x)

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
	int n, n1, n2;
	sd(n); sd(n1); sd(n2);

	rep(i, 0, n) sd(arr[i]);

	sort(begin(arr), begin(arr) + n);
	if (n1 > n2) swap(n1, n2); // n1 = min(n1, n2)

	double m1 = 0, m2 = 0;
	rep(i, 0, n1) m1 += arr[n - 1 - i];
	rep(i, 0, n2) m2 += arr[n - 1 - i - n1];
	m1 /= n1;
	m2 /= n2;

	pf(m1 + m2);
}