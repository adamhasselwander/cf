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

int arr[1000];
int light[1000];
int tmp[1000];
int main() {
	int n, k;
	sd(n), sd(k);
	rep(i, 0, n) sd(arr[i]);
	int sum = 0;
	rep(i, 0, k) {
		int l;
		sd(l);
		light[i + 1] = l;
		sum += l;
	}

	rep(i, 0, n - sum + 1) {

		rep(j, 0, sum) {
			tmp[arr[i + j]]++;
		}
		
		bool ok = 1;
		rep(j, 0, 1000) {
			ok = ok && tmp[j] == light[j];
			tmp[j] = 0;
		}
		if (ok) {
			ps("YES");
			return 0;	
		}
	}

	ps("NO");
}