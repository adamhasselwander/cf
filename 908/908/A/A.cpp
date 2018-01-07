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


char vowels[10] = { 'a', 'e', 'i', 'o', 'u', '1' , '3', '5', '7', '9' };
char arr[100];
int main() {
	cin >> arr;
	int n = strlen(arr);

	int res = 0;
	rep(i, 0, n) {
		rep(j, 0, 10) {
			if (arr[i] == vowels[j]) {
				res++;
			}
		}
	}

	pd(res);

}