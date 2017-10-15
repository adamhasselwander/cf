#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d\n", x)
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


set<pair<int, int>> work; // set<time, id> (ids start at 1)
set<int> fre; // set<id>

int main() {
	int n, q;
	sd(n); sd(q);
	rep(i, 1, n + 1) fre.insert(i);

	int time = 0;
	rep(i, 0, q) {
		int t, k, d;
		sd(t), sd(k), sd(d);
		while (work.size() > 0 && t >= (*work.begin()).first) {
			fre.insert((*work.begin()).second);
			work.erase(work.begin());
		}
		if (k > fre.size())
		{
			pd(-1);
			continue;
		}
		int sum = 0;
		rep(i, 0, k) {
			int id = *fre.begin();
			fre.erase(fre.begin());
			sum += id;
			work.insert({ t + d, id });
		}
		pd(sum);
	}

}