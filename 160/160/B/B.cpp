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

vi first;
vi second;
int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		char c;
		sc(c);
		first.emplace_back(c - '0');
	}

	rep(i, 0, n) {
		char c;
		sc(c);
		second.emplace_back(c - '0');
	}

	sort(first.begin(), first.end());
	sort(second.begin(), second.end());

	if (first[0] < second[0]) swap(first, second);

	bool bigger = true;
	rep(i, 0, n) {
		if (first[i] > second[i]) continue;
		bigger = false;
		break;
	}

	if (bigger) ps("YES");
	else ps("NO");
	
}

