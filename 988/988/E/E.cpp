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

ll n;

int i = 0;
int arr[20];
int numsdist[20];
int numsdist2[20];
int tmp[20];

int count(int a, int b) {
	memcpy(tmp, arr, sizeof tmp);

	int score = 0;
	revrep(i, 1, numsdist[b]) {
		swap(tmp[i], tmp[i - 1]);
		score++;
	}

	if (tmp[0] != b || tmp[1] != a) {

		int adist = numsdist[a];
		if (numsdist[a] < numsdist[b]) {
			adist++;
		}

		revrep(i, 2, adist) {
			swap(tmp[i], tmp[i - 1]);
			score++;
		}
	}

	int j = i - 1;
	while (tmp[j] == 0) j--, score++;


	return score ;
}

int main() {
	sl(n);

	while (n > 0) {
		int a = n % 10LL;
		if (!numsdist[a]) numsdist[a] = i + 1;
		else if (!numsdist2[a]) numsdist2[a] = i + 1;

		arr[i++] = a;
		n /= 10LL;
	}

	int score = 1000;

	if (numsdist[5] && numsdist[0]) score = min(score, count(5, 0));
	if (numsdist[7] && numsdist[5]) score = min(score, count(7, 5));
	if (numsdist[2] && numsdist[5]) score = min(score, count(2, 5));
	if (numsdist[0] && numsdist2[0]) score = min(score, numsdist[0] - 1 + numsdist2[0] - 2);

	if (score == 1000) pd(-1);
	else pd(score);
}