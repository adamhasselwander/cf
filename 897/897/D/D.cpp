#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s\n", x)
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
const int w1l = w1.length();
string w2a = "What are you doing while sending \"";
const int w2al = w2a.length();
string w2b = "\"? Are you busy? Will you send \"";
const int w2bl = w2b.length();
string w2c = "\"?";
const int w2cl = w2c.length();

ll k, n;
bool stop;
void test(ll kk, string s, int l) {
	if (stop) return;

	if (l >= k - kk) {
		pc(s[k - kk - 1]);
		stop = true;
	}
}

ll rec(ll kk, int d) {
	if (stop) return 0;

	if (d == 0) {
		test(kk, w1, w1l);
		kk += w1l;
		return kk;
	}
	else {
		test(kk, w2a, w2al);
		kk += w2al;
	}

	ll kr = rec(kk, d - 1);
	ll kd = kr - kk;
	kk = kr;

	test(kk, w2b, w2bl);
	kk += w2bl;

	if (kk + kd + w2cl + 1 > k) {
		kk = rec(kk, d - 1);
		test(kk, w2c, w2cl);
	}
	else {
		kk += kd;
	}
	// parta + f(x-1) + partb + f(x-1) + partc
	kk += w2cl;

	return kk;
}


int main() {
	int q;
	sd(q);

	rep(i, 0, q) {
		sl(n), sl(k);
		stop = false;
		ll kk = rec(0, n);
		if (!stop) {
			if (k - kk == 0) {
				pc('?');
			}
			else {
				pc('.');
			}
		}

	}
	ps("");
}