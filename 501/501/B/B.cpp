#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d\n", x)
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

map<string, string> res; // first | last
map<string, string> ez; // last | first
int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		
		string a, b;
		cin >> a;
		cin >> b;

		if (ez.count(a)) {
			ez[b] = ez[a];
			res[ez[a]] = b;
		}
		else {
			res[a] = b;
			ez[b] = a;
		}

	}

	pd(res.size());
	for (auto& r : res) {
		cout << r.first << " " << r.second << endl;
	}


}