#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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

struct t{
	int h, i;
} arr[20000];

int main() {
	int n;
	sd(n);
	rep(i, 1, n + 1) {
		int a;
		sd(a);
		arr[i - 1] = { a, i };
	}

	sort(arr, arr + n, [](t a, t b) { return a.h < b.h; });

	int sum = 0;
	rep(i, 0, n) if (arr[i].h == arr[i + 1].h) sum++;
	
	if (sum >= 2) {
		ps("YES");
		rep(i, 0, n) pd(arr[i].i);
		ps("");
		bool b = true;
		rep(i, 0, n) {
			if (i + 1 < n && arr[i].h == arr[i + 1].h && b) {
				swap(arr[i].i, arr[i + 1].i);
				arr[i].h = -1;
				b = false;
			}
			pd(arr[i].i);
		}
		ps("");
		b = true;
		rep(i, 0, n) {
			if (i + 1 < n && arr[i].h == arr[i + 1].h && b) {
				swap(arr[i].i, arr[i + 1].i);
				b = false;
			}
			pd(arr[i].i);
		}

	}
	else {
		ps("NO");
	}
}