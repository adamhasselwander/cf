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

int input[100000];
int inputIndex = 0;
int nextInput() {
	return input[inputIndex++];
}
//
//#if _DEBUG  
//
//#define sd(x) x = nextInput()
//#define ps(x)
//#define pd(x)
//
//#endif


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


// a xor b, if bit is in both a and b it is set high else low
int arr1[70];
int arr2[70];
int arr3[1000010];

int prog() {
	int n, x;
	sd(n), sd(x);

	rep(i, 0, 19) {
		if (x & (1 << i)) {
			arr1[i] = 1;
		}
	}

	rep(i, 1, n + 1) {
		arr3[i] = i;
		rep(j, 0, 19) {
			if (i & (1 << j)) {
				arr2[j]++;
			}
		}
	}

	rep(j, 0, 19) {
		if (arr1[j] != arr2[j] % 2) {
			// We need to change this bit. 
			arr3[1] ^= (1 << j);
		}
	}

	if (n != 1) {
		arr3[2] ^= (1 << 18);
		arr3[1] ^= (1 << 18);
	}

	if (arr3[2] == arr3[1]) {
		if (n == 2) {
			ps("NO");
			return 0;
		}
		arr3[2] ^= (1 << 18);
		arr3[3] ^= (1 << 18);
	}

	ps("YES\n");

	int xx = 0;
	rep(i, 1, n + 1) {
		pd(arr3[i]);
		ps(" ");
		xx ^= arr3[i];
		if (arr3[i] > 1000000) {
			ps("ERROR");
			x = xx++;
		}
	}

	if (xx != x) {
		ps("ERROR");
		x = xx++;
	}
	return 0;
}

int main() {
	prog();
	return 0;

	srand((unsigned)time(0));

	revrep(j, 1, 10001) {
		revrep(i, 1, 10001) {
			inputIndex = 0;
			input[0] = rand() % 10000 + 1;
			input[1] = rand() % 10001;

			memset(arr1, 0, sizeof(arr1));
			memset(arr2, 0, sizeof(arr3));
			memset(arr3, 0, sizeof(arr2));

			prog();
			ps("\n");
		}
	}

}