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

int arr[1000010];
queue<int> qi;

int main() {
	int n, m, k;
	sd(n), sd(m), sd(k);

	rep(i, 0, n) {
		int a;
		sd(a);
		arr[a] = 1;
	}

	int nn = 1000010 - 1;
	int res = 0;
	rep(i, 1, nn) {

		if (qi.size() > 0) {
			int q = qi.front();
			while (i - m >= q) {
				qi.pop();
				if (qi.size() == 0) break;
				q = qi.front();
			}
		}

		if ((int)qi.size() + 1 >= k && arr[i]) {
			arr[i] = 0;
			res++;
		}

		if (arr[i]) qi.push(i);

	}
	pd(res);
}