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

	string s;
	cin >> s;

	int pos = 0;
	int matches = 0;


	while ((pos = s.find("Danil", pos)) <= s.length()) {
		matches++;
		pos += 5;
	}
	pos = 0;
	while ((pos = s.find("Olya", pos)) <= s.length()) {
		matches++;
		pos += 4;
	}
	pos = 0;
	while ((pos = s.find("Slava", pos)) <= s.length()) {
		matches++;
		pos += 5;
	}
	pos = 0;
	while ((pos = s.find("Ann", pos)) <= s.length()) {
		matches++;
		pos += 3;
	}
	pos = 0;
	while ((pos = s.find("Nikita", pos)) <= s.length()) {
		matches++;
		pos += 6;
	}

	if (matches == 1) ps("YES");
	else ps("NO");

}