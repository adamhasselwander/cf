#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
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

char input[26] = {0};
char pattern[100001] = { 0 };
char str[100001] = { 0 };
char EMPTY[100001] = { 0 };
bool good[26] = { 0 }; // O(1) lookup

int main() {
	// match the first half of the "regexp" then the second half backwards. 
	// keep track of the last first and last second indexes. if all chars inbetween are bad then ok

	ss(input);
	rep(i, 0, 26) {
		if (input[i] == 0) break;
		good[input[i] - 'A'] = 1;
	}
	ss(pattern);

	int n, plen = strlen(pattern);
	sd(n);

	rep(i, 0, n) {
		memcpy(str, EMPTY, 100001);
		ss(str);

		int j = 0, k = 1, slen = strlen(str), ans = 0;

		while (true) {
			if (j >= plen) {
				break;
			}
			if (pattern[j] == '*') break;
			if (j >= slen) {
				ans = 1;
				break;
			}
			if (pattern[j] == '?') {
				if (!good[str[j] - 'A']) {
					ans = 1;
					break;
				}
			}
			else if (str[j] != pattern[j]) {
				ans = 1;
				break;
			}

			j++;

		}
		
		if (ans == 1) {
			ps("NO");
			continue;
		}

		if (j == plen && slen == plen) {
			ps("YES");
			continue;
		}

		while (true) {
			if (pattern[plen - k] == '*') break;
			if (j - 1 == slen - k) { // May have to expand one
				ans = 1;
				break;
			}
			if (pattern[plen - k] == '?') {
				if (!good[str[slen - k] - 'A']) {
					ans = 1;
					break;
				}
			}
			else if (str[slen - k] != pattern[plen - k]) {
				ans = 1;
				break;
			}
			k++;
		}

		if (ans == 1) {
			ps("NO");
			continue;
		}

		rep(l, j, slen - k + 1) {
			if (good[str[l] - 'A']) {
				ans = 1;
				break;
			}
		}

		if (ans == 1) {
			ps("NO");
		}
		else {
			ps("YES");
		}

	}


}