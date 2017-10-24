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

vi hor[1000];
vi ver[1000];

int n, m, k;
int x1, y1, x2, y2;
int bfs(int x, int y, int depth) {

	if (x == x2 && y == y2) {
		pd(depth);
		exit(0);
	}

	for(int xx : hor[y])

}

int main() {
	sd(n), sd(m), sd(k);

	rep(i, 0, n) {
		rep(j, 0, m) {
			
			char c;
			sc(c);
			if (c == '.') {
				ver[i].push_back(j);
				hor[j].push_back(i);
			}
		}
	}
	sd(x1), sd(y1), sd(x2), sd(y2);

	bfs(x1, y1, 0);
}