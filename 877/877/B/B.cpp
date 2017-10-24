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

char arr[5010];
int ai[5010];
vector<pii> a;

int main() {
	ss(arr);
	int n = strlen(arr);
	
	int tota = 0;
	rep(i, 0, n) {
		if (arr[i] == 'a') tota++;
		ai[i + 1] = tota;
	}

	int first = 0;
	int middle = 0;
	int last = 0;

	int best = 0;

	rep(i, 0, n) {

		rep(j, i, n + 1) {

			best = max(best, first + middle + (ai[n] - ai[j]));
			if (arr[j] == 'b') middle++;

		}
		middle = 0;
		if (arr[i] == 'a') first++;
	}

	pd(best);
}


