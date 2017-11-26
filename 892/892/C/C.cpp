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

int gcd(int x, int y)
{
	if (x < y) swap(x, y);

	while (y > 0)
	{
		x = x % y;
		swap(x, y);
	}
	return x;
}

int arr[2020];
int main() {

	int n;
	sd(n);

	int no = 0;
	rep(i, 0, n) {
		sd(arr[i]);
		if (arr[i] == 1) no++;
	}
	
	if (no > 0) {
		pd(n - no);
		return 0;
	}

	int score = -1;
	rep(i, 0, n) {
		int g = arr[i];
		rep(j, i, n) {
			g = gcd(g, arr[j]);
			if (g == 1) {
				int s = (j - i) + n - 1;
				score = min(score, s);
				if (score == -1) score = s;
			}
		}
	}

	pd(score);

}