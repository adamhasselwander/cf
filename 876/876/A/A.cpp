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

const int R = 0;
const int E = 1;
const int O = 2;

int arr[3];
int main() {
	int n;

	sd(n), sd(arr[0]), sd(arr[1]), sd(arr[2]);

	int curr = 0;
	int dist = 0;
	while (n > 1) {
		
		switch (curr)
		{
		case R:
			if (arr[0] > arr[1]) {
				curr = E;
				dist += arr[1];
			}
			else {
				curr = O;
				dist += arr[0];
			}
			break;
		case E:
			if (arr[1] > arr[2]) {
				curr = O;
				dist += arr[2];
			}
			else {
				curr = R;
				dist += arr[1];
			}
			break;
		case O:
			if (arr[0] > arr[2]) {
				curr = E;
				dist += arr[2];
			}
			else {
				curr = R;
				dist += arr[0];
			}
			break;
		}

		n--;
	}

	pd(dist);
}