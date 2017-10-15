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

int visited[100] = {};
int done[100] = {};
int arr[100];

int target = 0, current = 0, t = 0;
int best = 0;

int res[100];
int ri;

void s() {
	if (visited[current] > 1) {
		pd(-1);
		exit(0);
		return;
	}
	visited[current]++;
	done[current] = 1;

	if (current == target) {
		if (t % 2 == 0) t /= 2;
		res[ri++] = t;
		return;
	}

	current = arr[current];
	t++;

	s();
}

int gcd(int a, int b)
{
	for (;;)
	{
		if (a == 0) return b;
		b %= a;
		if (b == 0) return a;
		a %= b;
	}
}

int lcm(int a, int b)
{
	int temp = gcd(a, b);

	return temp ? (a / temp * b) : 0;
}

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		sd(arr[i]);
		arr[i]--;
	}

	rep(i, 0, n) {
		if (done[i]) continue;

		target = i;
		current = arr[target];
		t = 1;
		s();

		fill(begin(visited), begin(visited) + n, 0);
	}

	int score = res[0];
	rep(i, 1, ri)
		score = lcm(score, res[i]);

	pd(score);
}