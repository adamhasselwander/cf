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

int dead[1000000];
int max(int a, int b) {
	if (a > b) return a;
	return b;
}
int main() {
	
	int n;
	sd(n);
	rep(i, 0, n) {
		int l;
		sd(l);
		dead[max(i - l, 0)] = i;
	}

	int count = 0;
	int c = 0;
	rep(i, 0, n) {
		c = max(c, dead[i]);
		if (c <= i) count++;
	}
	pd(count);
}