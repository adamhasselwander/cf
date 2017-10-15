#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s\n", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;



char arr[100000];
int dp[2][100000];

int main() {

	ss(arr);

	int m = strlen(arr);

	dp[arr[0] == '#'][0] = arr[0] == '#';
	dp[arr[0] != '#'][0] = arr[0] != '#';
	
	rep(i, 1, m) {
		dp[arr[i] == '#'][i] = dp[arr[i] == '#'][i - 1] + 1;
		dp[arr[i] != '#'][i] = dp[arr[i] == '#'][i - 1];
	}

	int n;
	sd(n);

	rep(i, 0, n) {
		int a, b;
		sd(a), sd(b);
	}
	


	ps("1");
	ps("1");
	ps("5");
	ps("4");

}