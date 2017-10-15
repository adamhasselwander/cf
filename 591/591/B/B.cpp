#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define pc(x) printf("%c", x)
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

int arr[256];
char word[200000];
vector<pair<char, char>> input;

int main() {
	int n, m;
	sd(n), sd(m);

	rep(i, 0, n) {
		sc(word[i]);
	}

	rep(i, 0, 256) arr[i] = i;

	rep(i, 0, m) {
		char a, b;
		sc(a), sc(b);
		input.push_back({ a, b });
	}

	reverse(input.begin(), input.end());
	for (auto p : input) {
		swap(arr[p.first], arr[p.second]);
	}

	rep(i, 0, n) {
		pc(arr[word[i]]);
	}

}