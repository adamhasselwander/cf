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

int q1[110]; // starts at 1
int q2[110]; // starts at 1

int main() {
	string s;
	cin >> s;

	rep(i, 0, s.length()) {
		q1[i + 1] = q1[i] + (s[i] == 'Q');
	}

	revrep(i, 0, s.length()) {
		q2[i + 1] = q2[i + 2] + (s[i] == 'Q');
	}

	int ans = 0;
	rep(i, 0, s.length()) {
		if (s[i] == 'A') {
			ans += q1[i + 1] * q2[i + 1];
		}
	}

	pd(ans);
}