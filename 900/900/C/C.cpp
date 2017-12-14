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

int arr[100000];

int main() {
	int n;
	sd(n);

	int largest = -1,
		found = 0;

	rep(i, 0, n) {
		sd(arr[i]);
		if (arr[i] > largest) found++;
	}

	int rm = arr[0],
		rmCnt = -1,
		largest = -1;
	
	rep(i, 0, n - 1) {

		if (arr[i] > largest && arr[i] > arr[i + 1]) {

			int j = 1,
				low = max(arr[i - 1], largest),
				cnt = 0;

			while (i + j < n && arr[i] > arr[i + j]) {
				if (arr[i + j] > low) {
					low = arr[i + j];
					cnt++;
				}

				j++;
			}
			cnt--;

			if (cnt > rmCnt) {
				rmCnt = cnt;
				rm = arr[i];
			}
			else if (cnt == rmCnt && rm > arr[i]) {
				rm = arr[i];
			}
		}

		largest = max(arr[i], largest);
	}

	if (rmCnt == 0 || rmCnt == -1) {
		int largest = -1;
		rm = -1;
		rep(i, 0, n) {
			if (arr[i] > largest) {
				largest = arr[i];
			}
			else {
				rm = min(rm, arr[i]);
			}
		}
		rm = rm == -1 ? arr[0] : rm;
	}


	pd(rm);

}