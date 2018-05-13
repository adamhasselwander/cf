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
int colors[256];
int main() {
	int n, k;
	sd(n), sd(k);

	rep(i, 0, n) sd(arr[i]);

	rep(i, 0, n) {
		int a = arr[i];

		if (!colors[a]) {

			int aa = max(a - k + 1, 0);

			int val = 0, ai = 0;
			revrep(j, aa, a) {
				if (colors[j]) {
					aa = j + 1;
					val = colors[j];
					while (j >= 0 && colors[j] == val) {
						ai = j;
						j--;
					}
					break;
				}
			}

			if (colors[ai] && ai + k > a) {
				rep(j, ai, a + 1) {
					colors[j] = colors[ai];
				}
			}
			else {
				rep(j, aa, a + 1) {
					if (!colors[j]) colors[j] = aa + 1;
				}
			}

			//aa is color for pixel 

		}

		pd(colors[a] - 1);
		ps(" ");

	}

}