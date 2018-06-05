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

vector<string> names;
int main() {
	int n;
	cin >> n;

	rep(i, 0, n) {
		string s;
		cin >> s;
		names.push_back(s);
	}

	sort(names.begin(), names.end(), [](string a, string b) {
		return a.length() < b.length();
	});

	rep(i, 0, n - 1) {
		if (names[i + 1].find(names[i]) == string::npos) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES" << endl;
	for (string name : names) cout << name << endl;
}