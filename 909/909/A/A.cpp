#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pc(x) printf("%c", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int main() {
	string a, b;
	cin >> a >> b;

	int blen = 0;
	string res = "";
	
	rep(i, 1, a.size() + 1) {
		rep(j, 1, b.size() + 1) {

			string pa = a.substr(0, i);
			string pb = b.substr(0, j);

			string r = pa + pb;
			if (res == "" || res > r) {
				res = r;
			}

		}

	}

	cout << res << endl;

}