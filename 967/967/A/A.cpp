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
	int n, s;
	sd(n), sd(s);

	int lastmins = -s - 1;
	rep(i, 0, n) {
		int h, m;
		sd(h), sd(m);

		int mins = h * 60 + m;
		int dist = mins - lastmins;
		if (dist >= s * 2 + 2) {
			break;
		}
		lastmins = mins;

	}

	int time = lastmins + s + 1;
	pd(time / 60);
	ps(" ");
	pd(time % 60);

}