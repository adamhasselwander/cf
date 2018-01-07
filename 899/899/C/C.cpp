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


int main() {
	int n;
	sd(n);

	int s = 0, ans =0;
	rep(i, 0, n) {
		s += i + 1;
	}

	vi arr;

	if (n % 2 == 0 && (n / 2) % 2 == 0) { // even even OK
		pd(0);
		rep(i, 0, n / 4) {
			arr.push_back(i + 1);
			arr.push_back(n - i);
		}
	}
	else if (n % 2 == 0 && (n / 2) % 2 == 1) { // even odd OK
		pd(1);
		rep(i, 0, n / 2) {
			if (i % 2 == 1) {
				arr.push_back(i + 1);
				arr.push_back(n - i);
			}
		}
		arr.push_back(n / 2);
	}
	else if (n % 2 == 1 && (n / 2) % 2 == 0) { // odd even
		pd(1);
		rep(i, 0, n / 2) {
			if (i % 2 == 1) {

				if ((i + 1) != n / 4) arr.push_back(i + 1);
				arr.push_back(n - (i));
			}
		}
		arr.push_back(n / 2 + 1);
	}
	else { // odd odd
		pd(0);
		rep(i, 3, n / 2 - 1) {
			if (i % 2 == 1) {
				arr.push_back(i);
				arr.push_back(n - (i - 1));
			}
		}
		arr.push_back(n);
		arr.push_back(n / 2 + 1);
		arr.push_back(n / 2);
	}

	ps("");
	pd(arr.size());
	for (int i : arr) {
		pd(i);
		ans += i;
	}
	ps("");
	ps("");
	pd(ans), pd(ans * 2), pd(s);
}