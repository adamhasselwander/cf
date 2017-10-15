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

set<int> nums;
int n;
void generate(int a) {
	if (a > n) return;
	nums.emplace(a);

	generate(a * 10 + 4);
	generate(a * 10 + 7);
}


int main() {
	sd(n);

	generate(4);
	generate(7);

	for (int num : nums) {
		if (n % num == 0) {
			ps("YES");
			return 0;
		}
	}

	ps("NO");
}