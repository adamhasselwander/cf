#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <string.h>

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


char s[1011];

bool alpha[30];

int main() {
	ss(s);

	int slen = strlen(s);

	int n;
	sd(n);

	if (n > slen) {
		ps("impossible");
		return 0;
	}

	rep(i, 0, slen) {
		alpha[s[i] - 'a'] = 1;
	}


	rep(i, 0, 30) {
		if (alpha[i]) n--;
	}

	pd(max(n, 0));

}

//4
//2 1 3
//1 2
//2 4 6
//1 5