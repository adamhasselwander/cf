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
	sort(all(sorted));

	char lowest = sorted[0];
	char highest = sorted[n - 1];

	// 3 5
	// abc
	// ans: abcaa
	if (n < k) {
		rep(i, 0, n) cout << s[i];
		rep(i, 0, k - n) cout << lowest;
	}

	 //8 6
	 //aabbccaa
	// ans: aabcaa

	// 8 6
	// abcdef ghi
	// ans: abcdeg
	if (n >= k) {
		string r = s.substr(0, k);
		char last = r[k - 1];

		int ind = k - 1;
		while (last == highest && r[ind] == last) {
			r[ind] = lowest;
			ind--;
		}
		ind--;

		// r[ind + 1] should be equal to the next char after s[ind + 1]
		
		rep(i, 0, n) {
			char c = sorted[i];
			while (sorted[i] == c) i++;
			i--;
			if (sorted[i] == s[ind + 1]) {
				r[ind + 1] = sorted[i + 1];
				break;
			}
		}

		cout << r;
	}

	//if (n == k) {
	//	rep(i, 0, n - 2) cout << s[i];
	//	cout << s[n - 1] << sorted[0];
	//}

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