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
	int gcount, fourseats, singleseat = 0, len = 0;
	sd(fourseats), sd(gcount);
	int twoseats = fourseats * 2;
	
	rep(i, 0, gcount) {

		int gi;
		sd(gi);

		while (gi >= 4 && fourseats > 0) {
			fourseats--;
			gi -= 4;
		}

		while (gi >= 2 && twoseats > 0) {
			twoseats--;
			gi -= 2;
		}

		if (fourseats == 0 && twoseats == 0 && gi > 0) {
			ps("NO");
			return 0;
		}

		if (gi > 0) {
			arr[len] = gi;
			len++;
		}

	}

	sort(arr, arr + len, greater<int>());

	rep(i, 0, len) {

		if (arr[i] == 3) {

			if (twoseats > 0) {
				twoseats -= 1;
				arr[i] = 1;
			}
			else if (fourseats > 0) { // Maybe we should take singleseats first...
				fourseats -= 1;
				arr[i] = 0;
			}
			else if (singleseat > 0) {
				singleseat -= 1;
				arr[i] -= 1;
			}
			
		}
		else if (arr[i] == 2) {

			if (twoseats > 0) {
				twoseats -= 2;
				arr[i] = 0;
			}
			else if (fourseats > 0) {
				fourseats -= 1;
				if (arr[i] == 1) twoseats += 1;
				else singleseat += 1;
				arr[i] = 0;
			}

			if (singleseat > 0 && arr[i] > 0) {
				singleseat -= 1;
				arr[i] -= 1;
			}

		}

		if (arr[i] == 1) {

			if (singleseat > 0) {
				singleseat -= 1;
			}
			else if (fourseats > 0) { // should we check foursets or twoseats first?
				fourseats -= 1;
				twoseats += 1;
			}
			else if (twoseats > 0) {
				twoseats -= 1;
			}

			arr[i] = 0;

		}

		if (arr[i] > 0) {
			ps("NO");
			return 0;
		}

	}

	ps("YES");

}