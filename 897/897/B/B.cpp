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

	ll k, p;


	sl(k), sl(p);

	ll sum = 0;

	rep(i, 1, k + 1) {


		ll num = i;
		ll rev = 0;
		ll left = i;
		while (num > 0)
		{
			rev = rev * 10 + (num % 10);
			num = num / 10;
			left *= 10;
		}

		left += rev;

		sum += left;
		sum %= p;

	}


	pl(sum);	

}