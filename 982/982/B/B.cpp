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

struct seat {
	int w, i;
};

seat bus[200000];
map<int, int> bus2;

int main() {
	int n;
	sd(n);
	int li = 0, hi = n - 1;

	rep(i, 0, n) {
		int w;
		sd(w);
		bus[i] = { w, i };
	}

	sort(bus, bus + n, [](seat a, seat b) {
		return a.w < b.w;
	});

	// an introvert could just take any seat

	rep(i, 0, n * 2) {
		char c;
		sc(c);
		bool intro = c - '0';
		if (!intro) {
			seat s = bus[li++];
			pd(s.i + 1);
			bus2.insert({ s.w, s.i });
		}
		else {
			auto s = *(--bus2.end());
			pd(s.second + 1);
			bus2.erase(s.first);
		}

	}

}