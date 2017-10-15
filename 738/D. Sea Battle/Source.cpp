#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pdn(x) printf("%d\n", x)
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

char arr[200001];
int res[200001];
int ri = 0;

int main() {
	int n, a, b, k;
	sd(n); sd(a); sd(b); sd(k);
	ss(arr);
	arr[n] = '1';

	int i = 0;
	while (i < n) {

		bool stop = 0;
		rep(j, 0, b) {
			if (arr[i++] == '1') {
				stop = 1;
				break;
			}
		}
		if (!stop) {
			a--;
			if (0 >= a) res[ri++] = i;
		}

	}

	pdn(ri);
	rep(j, 0, ri) pd(res[j]);
}