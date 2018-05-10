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


int main() {
	ll n, m, k;
	sl(n), sl(m), sl(k);


	// n x m

	// n m m m m
	// n
	// n
	// n
	
	if (n > k) {
		pd(k + 1);
		ps(" ");
		pd(1);
		return 0;
	}

	k -= n;

	// m - 1 steps to go one more row up
	int row = n - (k / (m - 1));
	int col = k % (m - 1);
	if (row % 2 == 1) 
		col = (m- 2) - col;

	pd(row);
	ps(" ");
	pd(col + 2);

}