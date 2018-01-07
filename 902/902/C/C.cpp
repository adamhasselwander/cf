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

int arr[200100];

vi g[200100];

int nums[200010];
int ni = 1;
int h;

void gen(int depth, int m) {
	if (depth > h) return;

	int nni = ni;
	rep(i, 0, arr[depth]) {
		g[m].push_back(nums[ni]);
		ni++;
	}

	gen(depth + 1, nums[nni]);
}

void print(int n) {
	if (n == 0) pd(0);
	for (int gg : g[n]) {
		pd(n + 1);
		print(gg);
	}
}

int main() {

	sd(h);
	int last = 0;
	bool found = false;

	rep(i, 0, 200010) nums[i] = i;

	int hsum = 0, hi;
	rep(i, 0, h + 1) {
		sd(arr[i]);
		if (last > 1 && arr[i] > 1) {
			found = true;
		}
		last = arr[i];

		if (!found) {
			hi = i;
			hsum += arr[i];
		}
	}
	
	gen(1, 0);

	if (!found) {
		ps("perfect");
		return 0;
	}
	else {

		// print this list
		ps("ambiguous");

		print(0);
		hsum -= 1;
		int hh = *g[hsum].begin();
		g[hsum].erase(g[hsum].begin());
		g[hsum - 1].push_back(hh);
		ps("");
		print(0);
	}

}