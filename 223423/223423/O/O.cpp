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
	int n, k;

	string s;
	cin >> n >> k >> s;

	string sorted = s;
	sort(all(s));

	char lowest = s[0];
	char highest = s[n - 1];

	if (n < k) {
		rep(i, 0, n) cout << s[i];
		rep(i, 0, n - k) cout << sorted[0];
	}

	if (n > k) {
		rep(i, 0, k - 1) cout << s[i];
		cout << s[k];
	}

	if (n == k) {
		rep(i, 0, n - 2) cout << s[i];
		cout << s[n - 1] << sorted[0];
	}

	// if n < k
	// take S and append smallest char in S untill S is of length k

	// if n > k
	// take k - 1 first chars of S and append char k in S

	// if n == k
	// take k - 2 chars of S append char k - 1 append smallest char in S


	// WRONG:

	//3 2
	//acc

	// OR:

	//3 3
	//ayy

}