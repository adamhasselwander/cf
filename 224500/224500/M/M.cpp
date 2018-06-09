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

pii arr[100010];
int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, m) {
		int a;
		sd(a);
		arr[i] = { a, i + 1 };
	}

	sort(arr, arr + m, [](pii a, pii b) { 
		if (a.first == b.first) return a.second < b.second;
		return a.first < b.first; 
	});

	int laps = 0, index = 0;
	rep(i, 0, m) {

		bool last = (i > 0 && arr[i].first == arr[i - 1].first);

		if (!last && arr[i].first < index) {
			laps++;
			index = arr[i].second;
		} else if (index <= arr[i].second) {
			index = arr[i].second;
		} else {
			laps++;
			index = arr[i].second;
		}
	}

	pl((ll)laps * n + arr[m - 1].first - 1);
	}