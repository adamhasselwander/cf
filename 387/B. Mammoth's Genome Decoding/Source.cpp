#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pc(x) printf("%c", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

map<char, int> m;
char arr[256];
int ai = 0;
char alph[] = { 'A', 'C','G','T' };

int main() {
	int n;
	sd(n);
	rep(i, 0, n) {
		char c;
		sc(c);
		m[c]++;
		arr[ai++] = c;
	}

	int mx = max(m['A'], max(m['C'], max(m['G'], m['T'])));
	int rem = mx * 4 - m['A'] - m['C'] - m['G'] - m['T'];

	if (m['?'] >= rem && (m['?'] - rem) % 4 == 0) {
		int i = 0;

		rep(j, 0, 4) {
			while (mx - m[alph[j]] > 0) {
				if (arr[i] == '?') {
					pc(alph[j]);
					m[alph[j]]++;
				}
				else {
					pc(arr[i]);
				}
				i++;
			}
		}
		int api = 0;
		rep(j, i, ai) {
			if (arr[j] == '?') {
				pc(alph[api]);
				api = (api + 1) % 4;
			}
			else {
				pc(arr[j]);
			}
		}


	}
	else {
		ps("===");
	}
}