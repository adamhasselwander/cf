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


int main() {
	int n, k;
	sd(n), sd(k);
	int maxK = 2 * (n - 2);

	if (k > maxK) {
		ps("NO");
	}
	else if (k % 2) {

		cout << "YES" << "\n";
		cout << string(n, '.') << "\n";
		// print from middle
		// aaa xxxx aaa
		int offset = (n - min(k, n - 2)) / 2;

		rep(i, 0, offset) cout << ".";
		rep(i, 0, min(k, n - 2)) cout << "#";
		rep(i, 0, offset) cout << ".";
		k = max(k - (n - 2), 0);
		cout << "\n";

		string ab = string(n, '.');
		for (int i = 0; i < k / 2; i++)
		{
			int a = i + 1;
			int b = n - a - 1;
			ab[a] = '#';
			ab[b] = '#';
		}
		cout << ab << "\n";
		cout << string(n, '.') << "\n";

	}
	else {
		// FILL ALL IN THE MIDDLE
		cout << "YES" << "\n";
		cout << string(n, '.') << "\n";

		string ab = string(n, '.');
		string ac = string(n, '.');

		for (int i = 1; i <= k / 2; i++)
		{
			ab[i] = '#';
			ac[i] = '#';
		}
		cout << ab << "\n";
		cout << ac << "\n";
		cout << string(n, '.') << "\n";

	}
}