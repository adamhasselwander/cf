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


struct show {
	long start, end;
};

show shows[200001];


bool compare(show a, show b) {
	return a.start < b.start;
}

int main() {

	int n;
	sd(n);
	
	rep(i, 0, n) {
		sl(shows[i].start);
		sl(shows[i].end);
	}

	sort(shows, shows + n, compare);
	
	long tv1 = -1, tv2 = -1;

	int i = 0;

	while (i < n) {
		if (tv1 < shows[i].start) {
			tv1 = shows[i].end;
		}
		else if (tv2 < shows[i].start) {
			tv2 = shows[i].end;
		}
		else {
			ps("NO");
			return 0;
		}
		i++;
	}

	ps("YES");

}