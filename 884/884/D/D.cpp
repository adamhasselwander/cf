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

int boxes[200000];
int main() {
	int n;
	sd(n);

	int tot = 0;
	int first;
	sd(first);

	rep(i, 1, n) {
		sd(boxes[i - 1]);
		tot += boxes[i - 1];
	}

	ll ans = 0;
	if (n % 2 == 0) {
		boxes[0] += first;
		n--;
		ans += boxes[0];
	}
	else {
		boxes[n - 1] = first;
	}

	sort(boxes, boxes + n);

	
	revrep(i, 1, n) {
		ans += tot;
		if (i < 3) {
			tot = 0;
		}
		else {
			tot -= boxes[i];
			tot -= boxes[i - 1];
			i--;
		}
	}

	pl(ans);
}