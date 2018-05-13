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

string words[100100];
int     cost[100010];
int   groups[100100];

map<string, int> res;

int main() {
	std::ios_base::sync_with_stdio(false); // Supposedly makes I/O faster

	int n, k, m;
	cin >> n >> k >> m;

	rep(i, 0, n) {
		string s;
		cin >> s;
		words[i] = s;
	}

	rep(i, 0, n) {
		int a;
		cin >> a;
		cost[i] = a;
	}

	rep(i, 0, k) {
		int l;
		cin >> l;
		int mincost = INT_MAX;

		rep(j, 0, l) {
			int g;
			cin >> g;
			groups[j] = g - 1;
			mincost = min(cost[groups[j]], mincost);
		}

		rep(j, 0, l) res[words[groups[j]]] = mincost;
		
	}

	ll sum = 0;
	rep(i, 0, m) {
		string s;
		cin >> s;
		sum += (ll)res[s];
	}

	cout << sum;
}