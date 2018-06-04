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

ll dp[100];
ll arr[20000];
ll sums[20000];
ll sums2[20000];

int main() {
	int n, k, p;
	sd(n), sd(k), sd(p);


	rep(i, 0, n) {
		int a;
		sd(a);
		arr[i] = a;
		sums[i + 1] = sums[i] + a;
		sums2[i] = sums[i + 1] % p;
	}


	int ans = 0;

	rep(i, 1, n) {
		int score = sums[i] % p;
		if (score == 0) score = p;
		int nextscore = sums[i];

		// check if last element also gives %p eqauls score
		if ((sums[n - 1] - sums[i]) % score != 0) {
			continue;
		}

		int cnt = 1;
		do
		{
			nextscore += score;
			cnt += binary_search(&sums[i], sums + n, nextscore);

			if (cnt == k) {
				ans = max(ans, score);
				break;
			}

		} while (nextscore < sums[i]);




	}


}