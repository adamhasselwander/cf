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


char aa[30];

int arr[12];
int arr2[12];



int main() {
	ll b;

	ss(aa);
	sl(b);

	rep(i, 0, 30) {
		if (!aa[i]) break;
		arr[aa[i] - '0']++;
	}

	int len = strlen(aa);

	ll num = 0;

	rep(i, 0, len) {
		
		revrep(k, 0, 10) {

			if (!arr[k]) continue;

			memcpy(arr2, arr, sizeof(arr));
			ll num2 = num * 10 + k;
			arr2[k]--;

			rep(m, 0, 10) {
				while (arr2[m]) {
					num2 *= 10;
					num2 += m;
					arr2[m]--;
				}
			}

			if (b >= num2) {
				num *= 10;
				num += k;
				arr[k]--;
				break;
			}

		}


	}

	pl(num);

}