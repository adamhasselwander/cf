#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <unordered_set>

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

unordered_set<string> res;
int main() {
	string s;
	getline(cin, s);
	res.emplace(s);
	int n = s.size();
	rep(i, 0, n) {
		s.insert(s.begin(), s[n - 1]);
		s.pop_back();
		res.emplace(s);
	}
	pd(res.size());
}