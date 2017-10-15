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

char s[1001];
char t[1001];
int pos[1001];
int bpos[1001];
int main() {
	int n, m;
	sd(n), sd(m);

	ss(s), ss(t);
	
	int best = 1002;
	rep(i, 0, m - n + 1) {
		int count = 0;
		rep(j, 0, n) {
			if (s[j] != t[i + j]) {
				pos[count] = j + 1;
				count++;
			}
		}
		if (best > count) {
			memcpy(bpos, pos, count * sizeof(pos[0]));
			best = count;
		}
	}

	pd(best);
	ps("");
	rep(i, 0, best) {
		pd(bpos[i]);
	}
}