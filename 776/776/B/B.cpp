#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d ", x)
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



int main() {
	vi primes;
	primes.push_back(2);

	int n;
	sd(n);
	pd(1 + (n > 2));
	ps("");

	pd(1); // n = 1
	
	for (int i = 3; i < n + 2; i++)
	{
		bool prime = true;
		for (int j = 0; j<primes.size() && primes[j] * primes[j] <= i; j++)
		{
			if (i % primes[j] == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime)
		{
			pd(1);
			primes.push_back(i);
		}
		else {
			pd(2);
		}
	}
	ps("");
}