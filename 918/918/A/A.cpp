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

vi fibs;
int arr[1010];

void fib() {
	
	int last = *(fibs.end() - 1);
	int second_last = *(fibs.end() - 2);

	int f = last + second_last;
	fibs.push_back(f);
	arr[f] = 1;
	if (f < 1010) fib();
}

int main() {
	fibs.push_back(1);
	fibs.push_back(1);
	arr[1] = 1;

	fib();

	int n;
	sd(n);


	rep(i, 1, n + 1) {
		if (arr[i]) ps("O");
		else ps("o");
	}

}