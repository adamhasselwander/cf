#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define pc(x) printf("%c", x)
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

char arr[1000];
int main() {
	ss(arr);

	int n = strlen(arr);
	bool caps = true;
	rep(i, 1, n) {
		if (arr[i] > 'Z') {
			caps = false;
			break;
		}
	}
	
	if (caps) {
		if (arr[0] <= 'Z') {
			pc(arr[0] + ('a' - 'A'));
		}
		else {
			pc(arr[0] - ('a' - 'A'));
		}

		rep(i, 1, n) {
			pc(arr[i] + ('a' - 'A'));
		}
	}
	else {
		rep(i, 0, n) {
			pc(arr[i]);
		}
	}

}