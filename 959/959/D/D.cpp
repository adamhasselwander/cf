#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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

int arr[100000];
int factors[100000];
int newfactors[100000];

unsigned int gcd(unsigned int n1, unsigned int n2) {
	return (n2 == 0) ? n1 : gcd(n2, n1 % n2);
}

bool factor(int n) {
	if (newfactors[n]) return false;

	int z = 2;
	bool ok = true;

	while (n >= z * z) {
		if (n % z == 0) {
			if (newfactors[z]) {
				ok = false;
				break;
			}
			newfactors[z] = 1;
			while (n % z == 0) n /= z;
		}
		z++;
	}

	newfactors[n] = 1;

	if (ok) {
		memcpy(factors, newfactors, sizeof(newfactors));
	}
	else {
		memcpy(newfactors, factors, sizeof(factors));
	}

	return ok;
}

int main() {

	int n;
	sd(n);
	int prev = 1;

	bool bigger = 0;

	rep(i, 0, n) {
		sd(arr[i]);

		int next;
		
		if (bigger) next = prev + 1;
		else next = arr[i];

		while (!factor(next)) next++;
		
		if (bigger) prev = next;

		if (next > arr[i]) bigger = 1;
		
		arr[i] = next;
	}

	rep(i, 0, n) pd(arr[i]);

}