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

struct student {
	int l, r, i;
};

vector<student> studs;
int res[2000];

int main() {
	int t;
	sd(t);

	rep(i, 0, t) {

		int n;
		sd(n);
		rep(i, 0, n) {
			int l, r;
			sd(l), sd(r);
			studs.push_back({ l, r, i });
		}

		int t = studs[0].l;
		rep(i, 0, n) {
			t = max(studs[i].l, t);

			if (studs[i].r < t) {
				res[i] = 0;
				continue;
			}

			res[i] = t;
			t++;
		}

		rep(i, 0, n) {
			pd(res[i]);
			ps(" ");
		}
		
		ps("\n");

		memset(res, 0, sizeof(res));
		studs.clear();

	}

}