#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("\n%s", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

//struct state {
//	char op;
//	int a;
//};
//
//state arr[100000];

int main() {

	int n, m = 10;
	sd(n);

	int fixed = 0;
	int res = 0;

	rep(i, 0, n) {
		char c;
		int a;
		sc(c), sd(a);

		switch (c)
		{
		case '|':

			rep(j, 0, m) {
				bool v = a & (1 << j);
				if (v) {
					fixed |= (1 << j);
					res |= (1 << j);
				}
			}

			break;
		case '&':

			rep(j, 0, m) {
				bool v = a & (1 << j);
				if (!v) {
					fixed |= (1 << j);
					res &= ~(1 << j);
				}
			}

			break;
		case '^':

			rep(j, 0, m) {
				bool v = a & (1 << j);
				if (v) {
					res ^= (1 << j);
				}
			}

			break;
		}
		//arr[i] = { c, a };

	}

	// reset all fixed bits to their value in res
	unsigned int b = 1023, c = 0, d = 0;
	rep(j, 0, m) {
		bool v = fixed & (1 << j);
		if (v) {
			b &= ~(1 << j);
			c ^= res & (1 << j);
		}
		else {
			d ^= res & (1 << j);
		}
	}

	pd(3);
	ps("& "), pd(b);
	ps("| "), pd(c);
	ps("^ "), pd(d);
/*
	rep(i, 0, 1024) {
		int y = ((i & b) | c) ^ d;
		int x = i;
		rep(j, 0, n) {
			switch (arr[j].op)
			{
			case '|':
				x |= arr[j].a;
				break;
			case '&':
				x &= arr[j].a;
				break;
			case '^':
				x ^= arr[j].a;
				break;
			}
		}
		if (x != y) {
			ps("");
			printf("i: %d x: %d y: %d", i, x, y);

		}
	}*/
}