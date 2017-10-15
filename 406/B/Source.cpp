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


int visited[10000 * 3];

int main() {
	int n, m;
	sd(n), sd(m);



	int k, t;
	rep(i, 0, m) {
		bool both = 0;
		fill(visited, visited + 10000 * 3, 0);
		sd(k);

		rep(j, 0, k) {
			sd(t);
			if (0 > t) {
				if (visited[-t]) {
					both = 1;
				}
				visited[-t + 10000] = 1;
			}
			else {
				if (visited[t + 10000]) {
					both = 1;
				}
				visited[t] = 1;
			}
		}


		if (!both) {
			ps("YES");
			return 0;
		}
	}



	ps("NO");
}