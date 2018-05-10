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

int boxes[300100]; // Why use a stack when you can use an array.
int bi = 0;

char op[10];
int main() {
	int n;
	sd(n);

	int curr, index = 1;
	int ans = 0;
	ss(op);

	sd(curr);
	boxes[bi++] = curr;

	rep(i, 1, n * 2) {
		ss(op);

		if (op[0] == 'a') {
			sd(curr);
			boxes[bi++] = curr;
		}
		else if (bi != 0) {
			if (index == boxes[bi - 1]) {
				bi--;
			}
			else {
				bi = 0;
				ans++;
			}
		}
		if (op[0] == 'r') index++;
	}

	pd(ans);

}