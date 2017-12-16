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

int arr[200];
int arr2[200];
int main() {
	int n;
	sd(n);
	
	rep(i, 0, n * 2) sd(arr[i]);
	
	sort(arr, arr + n * 2);
	int sum = 10000000;
	rep(i, 0, n * 2) {
		rep(j, i + 1, n * 2) {
			int m = 0;
			int s = 0;
			rep(k, 0, n * 2) {
				m++;

				if (k == i || k == j) continue;
				

				if (m == i || m == j) m++;
				if (m == i || m == j) m++;
				

				if (m >= n * 2) break;
				s += arr[m] - arr[k];
				k++, m++;
			}
			sum = min(sum, s);
		}
	}

	pd(sum);

	}