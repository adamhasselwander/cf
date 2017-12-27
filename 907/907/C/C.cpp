#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d\n", x)
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


int curr['z' - 'a' + 1];
int shock['z' - 'a' + 1];
int safe['z' - 'a' + 1];
bool found = false;
int res = 0;
int main() {
	int n;
	sd(n);

	rep(i, 0, 'z' - 'a' + 1) shock[i] = 1;

	string w;
	getline(cin, w);
	rep(i, 0, n - 1) {
		rep(i, 0, 'z' - 'a' + 1) curr[i] = 0;
		getline(cin, w);

		switch (w[0]) {
		case '!':
			if (found) res++;
			rep(i, 2, w.size()) {
				int c = w[i] - 'a';
				curr[c] = 1;
			}

			rep(i, 0, 'z' - 'a' + 1) {
				if (!safe[i] && shock[i] && curr[i]) shock[i] = 1;
				else shock[i] = 0;
			}

			break;
		case '?':
			if (found) res++;
			rep(i, 2, w.size()) {
				int c = w[i] - 'a';
				shock[c] = 0;
				safe[c] = 1;
			}
			break;
		case '.':
			rep(i, 2, w.size()) {
				int c = w[i] - 'a';
				safe[c] = 1;
				shock[c] = 0;
			}
			break;
		}

		int f = 0;
		rep(i, 0, 'z' - 'a' + 1) if (shock[i]) f++;
		if (f == 1) found = true;
	}
	getline(cin, w);

	pd(res);
}