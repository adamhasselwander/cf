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

int arr[20];

int main() {
	int v;
	sd(v);

	int minv = 100000000000;
	int mind = 1;
	rep(i, 1, 10) {
		sd(arr[i]);
		if (arr[i] <= minv) {
			minv = arr[i];
			mind = i;
		}
	}

	if (v < minv) {
		pd(-1);
		return 0;
	}

	int rem = v % minv;

	int bigger = 0;
	while (true) {
		bool f = false;
		
		revrep(i, mind + 1, 10) {

			if (arr[i] <= rem + minv) {
				pd(i);
				rem -= (arr[i] - minv);
				f = true;
				break;
			}
		}

		if (!f) break;
		bigger++;
	}

	int mins = v / minv;


	rep(i, bigger, mins) pd(mind);
	


}