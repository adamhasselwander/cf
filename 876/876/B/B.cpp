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

int arr[100000];
int res[100000];
int res2[100000];
int ri = 0;

vi nums[100000];

int main() {
	int n, k, m;
	sd(n), sd(k), sd(m);

	rep(i, 0, n) {
		sd(arr[i]);

		int  j = arr[i] % m;
		nums[j].push_back(arr[i]);
		
		if (nums[j].size() >= k) {
			ps("Yes");
			for (int nn : nums[j]) {
				pd(nn);
			}
			return 0;
		}
	}
	

	ps("No");

}