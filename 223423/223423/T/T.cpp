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


int main() {
	int n, a, b;
	sd(n), sd(a), sd(b);

	vi curr, next;
	rep(i, 1, n + 1) curr.push_back(i);

	int round = 1;
	while (true) {
		for (int i = 0; i < curr.size(); i += 2)
		{
			int aa = curr[i];
			int bb = curr[i + 1];
			if ((aa == a && bb == b) || (aa == b && bb == a)) {
				if (curr.size() == 2) {
					ps("Final!");
				}
				else {
					pd(round);
				}
				return 0;
			}

			if (aa == a || aa == b) next.push_back(aa);
			else if (bb == a || bb == b) next.push_back(bb);
			else next.push_back(aa);

		}
		round++;
		curr = next;
		next.clear();
	}
	

}