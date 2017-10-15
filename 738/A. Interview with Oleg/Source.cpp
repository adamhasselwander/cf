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

char arr[101];
char arr2[101] = {};
int ai = 0;

int main() {
	int n;
	sd(n);
	ss(arr);

	bool ogo = false;
	rep(i, 0, n) {

		if (arr[i] == 'o' && arr[i + 1] == 'g' && arr[i + 2] == 'o') {
			arr2[ai++] = '*';
			arr2[ai++] = '*';
			arr2[ai++] = '*';
			i += 3;

			while (arr[i] == 'g' && arr[i + 1] == 'o') i+= 2;
			i--;
		}
		else {
			arr2[ai++] = arr[i];
		}
	}

	ps(arr2);
}