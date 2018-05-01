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

int gcd(int u, int v) {
	while (v != 0) {
		int r = u % v;
		u = v;
		v = r;
	}
	return u;
}

int arr[1000];
set<int> test;
int main() {
	int m;

	sd(m);
	sd(arr[0]);
	rep(i, 1, m) {
		sd(arr[i]);
		if (arr[i] % arr[0]) {
			pd(-1);
			return 0;
		}
	}

	pd(m);
	ps("\n");
	rep(i, 0, m - 1) {
		pd(arr[i]);
		ps(" ");
		pd(arr[0]); // This ensures no random numbers are created.
		ps(" ");
	}
	pd(arr[m - 1]);

	// it has to be some numbers of the key due to i == j -> gcd(arr[i], arr[j]) == arr[i] == arr[j]


	// if arr contains a prime number and no 1 then it may be impossible to construct sequence

	// gcd of the key must equal the lowest number in the set S
	// so all numbers has to be divisible by the lowest number in S
	
	/*
	 
	 3
	 3 7 21

	 */

}