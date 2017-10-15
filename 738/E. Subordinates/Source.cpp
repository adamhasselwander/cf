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



int arr[200000];
int main() {

	int n, c, zeros = 0, z = 0;
	sd(n); sd(c);
	rep(i, 0, n) sd(arr[i]);

	if (arr[c - 1] != 0) z = 1;
	arr[c - 1] = 0;

	sort(begin(arr), begin(arr) + n);

	int last = 0, wrongs = 0;

	rep(i, 1, n - wrongs) {
		if (arr[i] == 0) {
			zeros++;
			z++;
		}
		else {
			if (!(arr[i] - last <= 1)) { // all cool
				if (zeros > 0) zeros--;
				else wrongs++;

				last++;
				i--;
			}
			else {
				if (arr[i] > last + 1) last = last + 1;
				else last = arr[i];
			}
		}
	}
	pd(wrongs + z);
}