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
//
//If a  = 0 or b  = 0, end the process.Otherwise, go to step 2;
//If a ≥ 2·b, then set the value of a to a  - 2·b, and repeat step 1. Otherwise, go to step 3;
//If b ≥ 2·a, then set the value of b to b  - 2·a, and repeat step 1. Otherwise, end the process.

ll a, b;
void step1();

void endproc() {
	pl(a);
	ps(" ");
	pl(b);
	exit(0);
}

void step3() {
	if (b >= 2 * a) {
		b -= (b / (2 * a)) * 2 * a;
		step1();
	}
	endproc();
}

void step2() {
	if (a >= 2 * b) {
		a -= (a / (2 * b)) * 2 * b;
		step1();
	}
	else step3();
}

void step1() {
	if (a == 0 || b == 0) endproc();
	step2();
}

int main() {
	sl(a), sl(b);
	step1();
}