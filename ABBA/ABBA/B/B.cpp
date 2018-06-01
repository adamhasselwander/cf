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

seat seats[200000];
map<int, int> iseats;

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		int w;
		sd(w);
		seats[i] = { w, i };
	}

	sort(seats, seats + n, [](seat a, seat b) { return a.w < b.w; });
	int si = 0;
	
	rep(i, 0, n * 2) {
		char c;
		sc(c);

		if (c == '0') {
			seat s = seats[si++];
			pd(s.i + 1);
			iseats[s.w] = s.i;
		}
		else {
			auto s = *iseats.rbegin();
			pd(s.second + 1);
			iseats.erase(s.first);
		}
	}
}