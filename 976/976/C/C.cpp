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

struct node {
	int a, b, i;
};

node nodes[300000];
int ni = 0;
int main() {


	int n;
	sd(n);

	rep(i, 1, n + 1) {
		int a, b;
		sd(a), sd(b);

		nodes[ni++] = { a, b, i };
	}
	
	sort(nodes, nodes + ni, [](const node a, const node b) {
		if (a.a == b.a) return a.b > b.b;
		return a.a < b.a;
	});

	int maxb = nodes[0].b;
	int maxbi = nodes[0].i;
	rep(i, 1, n) {
		if (nodes[i].b <= maxb) {
			pd(nodes[i].i);
			ps(" ");
			pd(maxbi);
			return 0;
		}else {
			maxb = nodes[i].b;
			maxbi = nodes[i].i;
		}
	}


	pd(-1);
	ps(" ");
	pd(-1);
}