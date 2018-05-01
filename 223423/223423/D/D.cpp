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

char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y' };
char arr[100];
char res[100];
int ri = 0;

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		sc(arr[i]);
	}

	int wow = 0;
	rep(i, 0, n) {
		bool w = 0;
		rep(j, 0, 6) {
			if (arr[i] == vowels[j]) {
				w = 1;
				break;
			}
		}

		if (w) {
			if (!wow) res[ri++] = arr[i];
			wow++;
		}
		else {
			wow = 0;
			res[ri++] = arr[i];
		}

	}

	ps(res);

}