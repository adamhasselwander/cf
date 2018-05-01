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


//rec(ll d, str)
//	if (d > 0)
//		str = str + w2a
//		return;
//	else
//		str = str + w1
//	rec(d - 1, str)
//	str = str + w2b
//	rec(d - 1, str)
//	str = str + w2c


string w1 = "What are you doing at the end of the world? Are you busy? Will you save us?";
string w2a = "What are you doing while sending \"";
string w2b = "\"? Are you busy? Will you send \"";
string w2c = "\"?";

string rec(ll k, int d, string s) {

	if (d == 0) {
		s += w1;
		return s;
	}
	else {
		s += w2a;
	}

	s = rec(k, d - 1, s);
	s += w2b;
	s = rec(k, d - 1, s);
	s += w2c;
	return s;
}

int main() {

	string s = rec(0, 5, "");


	ll n, k;
	sl(n), sl(k);



}