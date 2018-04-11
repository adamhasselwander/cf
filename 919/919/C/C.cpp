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


bool arr[2000][2000];

int main() {

	int n, m, k;
	sd(n), sd(m), sd(k);



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char c;
			sc(c);
			arr[i][j] = c == '*';
		}
	}

	int conx = 0, res = 0;

	for (int i = 0; i < n; i++)
	{
		conx = 0;
		for (int j = 0; j < m; j++)
		{
			if (!arr[i][j]) {
				conx++;
			}
			else {
				conx = 0;
			}

			if (conx >= k)
				res++;

		}
	}

	for (int i = 0; i < m; i++)
	{
		conx = 0;
		for (int j = 0; j < n; j++)
		{
			if (!arr[j][i]) {
				conx++;
			}
			else {
				conx = 0;
			}

			if (conx >= k)
				res++;

		}
	}

	if (k == 1) pd(res / 2);
	else pd(res);

}