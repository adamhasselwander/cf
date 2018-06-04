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

set<string> words = { "power", "time", "space", "soul", "reality", "mind" };
// purple, green, blue, orange, red, yellow
map<string, string> wordmap = { {"purple", "power"},{"green", "time"}, {"blue", "space"}, {"orange", "soul"}, {"red", "reality"}, {"yellow","mind"} };
set<string> exclude;

int main() {
	int n;
	cin >> n;


	rep(i, 0, n) {
		string s;
		cin >> s;
		exclude.insert(wordmap[s]);
	}

	cout << 6 - n << endl;
	for (auto w : words) {
		if (exclude.count(w) == 0) {
			string str = w;
			str[0] = toupper(str[0]);
			cout << str << endl;
		}
	}
}