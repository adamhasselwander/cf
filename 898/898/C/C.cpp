#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
#define ps(x) printf("%s ", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


map<string, vector<string>> friends;

bool hasEnding(std::string const &fullString, std::string const &ending) {
	if (fullString.length() >= ending.length()) {
		return (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending));
	}
	else {
		return false;
	}
}


int main() {
	int n;
	cin >> n;

	rep(i, 0, n) {
		string s;
		cin >> s;
		
		int m;
		cin >> m;
		vector<string> nums;
		rep(i, 0, m) {
			string s;
			cin >> s;
			nums.push_back(s);
		}
		auto ab = friends[s];
		ab.insert(ab.end(), all(nums));
		friends[s] = ab;
	}

	cout << friends.size() << "\n";

	for (auto f : friends) {
		sort(all(f.second));

		auto m = f.second.begin();
		while (m != f.second.end()) {

			bool rm = false;

			auto mm = f.second.begin();

			while (mm != f.second.end()) {
				if (mm == m) {
					mm++;
					continue;
				}
				string s = *m;
				string ss = *mm;

				// if ss ends with s remove s
				if (hasEnding(ss, s)) {
					rm = true;
					break;
				}
				mm++;
			}

			if (rm) {
				m = f.second.erase(m);
			}
			else {
				m++;
			}

		}

		cout << f.first << " ";
		cout << f.second.size() << " ";
		for (auto ff : f.second) cout << ff << " ";
		cout << "\n";
	}

}