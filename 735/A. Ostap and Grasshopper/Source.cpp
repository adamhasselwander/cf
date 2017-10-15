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

int arr[100];

int main() {
	int n, k, dir = 0, gi = 0, ti = 0;
	char c;

	sd(n); sd(k);
	rep(i, 0, n) {
		sc(c);
		if (c == 'T') 
			ti = i;
		else if (c == 'G') 
			gi = i;		
		else if (c == '.') 
			arr[i] = 1;
	}

	bool b = gi > ti;
	while (b == gi > ti) {
		gi += b ? -k : k;
		if (arr[gi] != 1) break;
	}

	if (gi == ti) ps("YES");
	else ps("NO");
}