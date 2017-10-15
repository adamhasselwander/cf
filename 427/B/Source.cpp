#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n)

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


char nums[100001];

int main() {
	int k;
	sd(k);

	ss(nums);
	int j, sum = 0;
	rep(i, 0, 100001) {
		if (nums[i] == 0) {
			j = i;
			break;
		}
		sum += nums[i] - '0';
	}

	if (sum >= k) {
		pd(0);
		return 0;
	}

	k -= sum;

	sort(nums, nums + j);

	rep(i, 0, j) {
		k -= 9 - (nums[i] - '0');
		if (0 >= k) {
			pd(i + 1);
			return 0;
		}
	}
}