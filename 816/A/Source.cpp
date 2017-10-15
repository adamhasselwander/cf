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


int reverse(int x) {
	int y = 0, xx = x;
	while (x > 0) {
		y *= 10;
		y += x % 10;
		x /= 10;
	}
	if (xx < 10) y *= 10;
	return y;
}



int main() {

	int h, m;
	scanf("%d:%d", &h, &m) == 0;
	
	int i = 0;
	while (true)
	{
		int rm = reverse(m);
		if (rm == h) {
			pd(i);
			break;
		}
		
		i++;
		m++;
		if (m > 59) {
			m = 0;
			h++;
			if (h > 23) {
				h = 0;
			}
		}
	}
}