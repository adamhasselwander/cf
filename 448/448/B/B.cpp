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


char w1[101];
char w2[101];

int main() {
	ss(w1);
	ss(w2);

	int n1 = strlen(w1);
	int n2 = strlen(w2);

	// check if word 2 chars is in word 1
	bool arr = true;
	bool order = true;

	int ii = 0;
	rep(i, 0, n2) {
		bool found = false;
		rep(j, ii, n1) {
			if (w1[j] == w2[i]) {
				ii = j + 1;
				found = true;
				break;
			}
		}
		if (!found) {
			order = false;
			break;
		}
	}

	rep(i, 0, n2) {
		bool found = false;
		rep(j, 0, n1) {
			if (w1[j] == w2[i]) {
				found = true;
				w1[j] = 0;
				break;
			}
		}
		if (!found) {
			arr = false;
			break;
		}
	}

	if (n1 == n2) {
		if (arr) ps("array");
		else ps("need tree");
	}
	else if (n1 < n2) {
		ps("need tree");
	}
	else {
		if (order) ps("automaton");
		else if (arr) ps("both");
		else ps("need tree");
	}

}


