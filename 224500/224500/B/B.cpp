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

vi students[100];

int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, m) {
		int a, b;
		sd(a), sd(b);
		students[a].push_back(b);
		students[b].push_back(a);
	}
	int score = -1;
	bool found;
	do
	{
		found = 0;
		vector<int> rm;

		rep(i, 1, n + 1) {
			if (students[i].size() == 1) {
				found = 1;
				int stud = students[i][0];
				rm.push_back(i);
			}
		}

		for (int r : rm) {
			students[r].clear();
			rep(i, 1, n + 1) {
				auto a = remove(all(students[i]), r);
				if (a != students[i].end()) {
					students[i].erase(a);
				}
			}
		}

		score++;
	} while (found);
	pd(score);
}