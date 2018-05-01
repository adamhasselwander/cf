#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;


vector<string> translate[64];

unordered_set<string> words;
int n, q, score = 0;

void dfs(string s) {
	if (s.size() == n) {
		if (words.find(s) == words.end()) {
			score++;
			words.insert(s);
		}
		return;
	}

	if (words.find(s) != words.end()) return;
	words.insert(s);

	string::iterator it;
	for (it = s.begin(); it != s.begin() + 1; it++) {
		for (string t : translate[*it - 'a']) {
			string ss = s;
			s.insert(it, t[1]);
			s.insert(it, t[0]);
			s.erase(it + 2);

			dfs(s);
			s = ss;
		}

	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a;
	char b;
	cin >> n >> q;

	for (size_t i = 0; i < q; i++) {
		cin >> a >> b;
		translate[b - 'a'].push_back(a);
	}
	dfs("a");

	cout << score;
}