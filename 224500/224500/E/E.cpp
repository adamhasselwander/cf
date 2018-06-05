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

	string b;
	cin >> b;
	ll res = 0;
	rep(i, 0, b.size()) {
		char c = b[b.size() - i - 1];
		ll m = 0;

		switch (c)
		{
			case '>': m = 0b1000; break;
			case '<': m = 0b1001; break;
			case '+': m = 0b1010; break;
			case '-': m = 0b1011; break;
			case '.': m = 0b1100; break;
			case ',': m = 0b1101; break;
			case '[': m = 0b1110; break;
			case ']': m = 0b1111; break;
		}

		ll num = 1;
		int shift = i;
		while (shift-- > 0) num = (num << 4) % 1000003;

		res += (m * num) % 1000003;
		res %= 1000003;
	}

	pl(res);
}