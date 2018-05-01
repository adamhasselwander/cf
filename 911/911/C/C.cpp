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


int arr[3];
int main() {
	sd(arr[0]), sd(arr[1]), sd(arr[2]);

	int ones = 0, twos = 0, trees = 0, fours = 0;

	rep(i, 0, 3) {
		if (arr[i] == 1) ones++;
		else if (arr[i] == 2) twos++;
		else if (arr[i] == 3) trees++;
		else if (arr[i] == 4) fours++;
	}

	if (ones >= 1 || twos >= 2 || trees == 3 || (twos == 1 && fours == 2)) {
		ps("YES");
	}
	else {
		ps("NO");
	}
	//sd(arr[0]), sd(arr[1]), sd(arr[2]);

	//rep(i, 0, arr[0]) {
	//	rep(j, 0, arr[1]) {
	//		rep(k, 0, arr[2]) {

	//			rep(z, 0, 10000) {
	//				if (i >= z) {

	//				}
	//			}


	//		}
	//	}
	//}

}