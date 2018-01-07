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

int arr[1000];
int visited[10000];
int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, n) {
		int a, b;
		sd(a), sd(b);
		arr[a] = b;
	}

	int cx = 0;
	while (true) {
		int x = arr[cx];

		if (x >= m) {
			ps("YES");
			return 0;
		}

		bool found = false;
		while (x >= 0)
		{
			if (!visited[x] && arr[x] > 0) {
				visited[x] = 1;
				cx = x;
				found = true;
				break;
			}
			x--;
		}

		if (!found) break;

	}

	ps("NO");

}