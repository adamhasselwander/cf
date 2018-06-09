#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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

int arr[10];
vector<vi> res;
int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		int a;
		sd(a);
		arr[a]++;
	}
	while (arr[1]) {

		if (arr[2] && arr[4]) {
			res.push_back({ 1, 2, 4 });
			arr[2]--, arr[4]--;
		}
		else if (arr[2] && arr[6]) {
			res.push_back({ 1, 2, 6 });
			arr[2]--, arr[6]--;
		}
		else if (arr[3] && arr[6]) {
			res.push_back({ 1, 3, 6 });
			arr[3]--, arr[6]--;
		}
		else {
			pd(-1);
			return 0;
		}

		arr[1]--;
	}

	rep(i, 0, 10) {
		if (arr[i]) {
			pd(-1);
			return 0;
		}
	}


	for (auto v : res) {
		for (int r : v) {
			pd(r);
		}
		ps("\n");
	}

}