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


char arr[10];
char arr2[10];

int n;
int tot = 0;
int success = 0;

void comp(int i) {
	if (i == n) {

		int l1 = 0, l2 = 0;
		rep(i, 0, n) {
			if (arr[i] == '+') l1++;
			else l1--;
			if (arr2[i] == '+') l2++;
			else l2--;
		}

		if (l2 == l1) success++;
		tot++;
		return;
	}

	if (arr2[i] == '?') {
		arr2[i] = '+';
		comp(i + 1);
		arr2[i] = '-';
		comp(i + 1);
		arr2[i] = '?';
	}
	else {
		comp(i + 1);
	}
}

int main() {

	int q = 0, p = 0, m = 0;

	ss(arr);
	ss(arr2);
	n = strlen(arr);
	
	comp(0);

	printf("%.12f", (double)success / (double)tot);

}