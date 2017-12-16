#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define ps(x) printf("%s\n", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

int even[100000];
int odd[100000];
int main() {
	int n;
	sd(n);

	rep(i, 0, n) if (i % 2) sd(even[i / 2]); else sd(odd[i / 2]);


	int es, ces = 0, maxes, mines; // (count) even swap
	int os, cos = 0, maxos, minos; // (count) odd swap

	rep(i, 0, n / 2) {
		if (even[i] <= even[i + 1]) continue;
		ces++;
		es = i;
		maxes = even[i + 1];
		if (i > 0) mines = even[i - 1];
		else mines = -1;
	}

	rep(i, 0, n / 2 + n % 2) {
		if (odd[i] >= odd[i + 1]) continue;
		cos++;
		os = i;
		maxos = even[i + 1];
		if (i > 0) minos = even[i - 1];
		else minos = -1;
	}


	if (ces > 1 || cos > 1) {
		pd(0);
	}
	else if (ces == 1 && cos == 1) {
			
	}

}