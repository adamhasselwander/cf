#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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

int arr[100000];
int used[700000];

vector<int> factors[700000];
int visited[700000];

bool factor(int n) {
	
	for (int v : factors[n]) if (used[v]) return false;

	for (int v : factors[n]) used[v] = 1;

	return true;
}

int main() {

	rep(i, 2, 700000) {
		if (!visited[i]) {
			for (int j = i; j < 700000; j += i)
			{
				factors[j].push_back(i);
				visited[j] = 1;
			}
		}
	}

	int n;
	sd(n);
	int prev = 1;

	bool bigger = 0;

	rep(i, 0, n) {
		sd(arr[i]);

		int next;

		if (bigger) next = prev + 1;
		else next = arr[i];

		while (!factor(next)) next++;

		if (bigger) prev = next;

		if (next > arr[i]) bigger = 1;

		arr[i] = next;
	}

	rep(i, 0, n) pd(arr[i]);
}