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

// 5 2 = 21 = 5 * 5 - 4
// 1 1 1 1 1
// 1 0 1 0 1
// 1 1 1 1 1
// 1 0 1 0 1
// 1 1 1 1 1


// 5 3 = 24
// 1 1 1 1 1
// 1 1 1 1 1
// 1 1 0 1 1
// 1 1 1 1 1
// 1 1 1 1 1

// 5 4 = 24


// 2 2 = 3 = 2 * 2 - 1

// 3 2 = 8 = 3 * 3 - 1

// 4 2 = 12 = 4 * 4 - 4
// 1 1 1 1
// 1 0 0 1
// 1 0 0 1
// 1 1 1 1

// 4 3 = 15 = 4 * 4 - 1
// 3, 8, 12, 21, 27
// 6 2 = 27 = 6 * 6 - 9 
// 1 1 1 1 1 1
// 1 0 0 1 0 1
// 1 1 1 1 0 1
// 1 0 1 0 1 1
// 1 0 1 0 0 1
// 1 1 1 1 1 1

// 7 2 = 40 = 7 * 7 - 9 
// 1 1 1 1 1 1 1
// 1 0 1 0 1 0 1
// 1 1 1 1 1 1 1
// 1 0 1 0 1 0 1
// 1 1 1 1 1 1 1
// 1 0 1 0 1 0 1
// 1 1 1 1 1 1 1


// 1 * 1, 2 ' 2, 3 * 3, 4 * 4

// 2 2 = 3   = 2 * 2 - 1
// 3 2 = 8   = 3 * 3 - 1
// 4 2 = 12  = 4 * 4 - 4
// 5 2 = 21  = 5 * 5 - 4
// 6 2 = 27  = 6 * 6 - 9 
// 7 2 = 40  = 7 * 7 - 9 
// 8 2 = 48  = 8 * 8 - 16 
// 9 2 = 65  = 9 * 9 - 16 


// 3 3 = 8   = 3 * 3 - 1
// 4 3 = 15  = 4 * 4 - 1
// 5 3 = 24  = 5 * 5 - 1
// 6 3 = 32  = 6 * 6 - 4 
// 7 3 = 45  = 7 * 7 - 4
// 8 3 = 60  = 8 * 8 - 4
// 9 3 = 72  = 9 * 9 - 9

// 1 1 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1 1 1
// 1 1 x 1 x 1 x 1 1
// 1 1 1 1 1 1 1 1 1
// 1 1 x 1 x 1 x 1 1
// 1 1 1 1 1 1 1 1 1
// 1 1 x 1 x 1 x 1 1
// 1 1 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1 1 1



//  1 1 2 2 3 3 4 4 5 5 6 6
//    1 1 1 2 2 2 3 3 3 4 4 4 
//      1 1 1 1 2 2 2 2 3 3 3 3
//        1 1 1 1 1 2 2 2 2 2 3 3 

// n 1 = 0
// n n = n * n - 1
// n * ceil((n + 1)  / 2) = n * n - 1
int main() {

	int t;
	sd(t);

	rep(i, 0, t) {

		int x;
		sd(x);

		if (x == 0) {
			pd(1);
			ps(" ");
			pd(1);
			ps("\n");
			continue;
		}

		int m = 2;
		bool stop = 0;
		while (!stop) {

			int sq = 1;
			int j = 0;
			int n = m;

			while (true) {

				int res = x - (n * n - sq * sq);


				if (sq * sq > x || m * m > x) {
					stop = true;
					pd(-1);
					break;
				}

				if (res < 0) {
					break;
				}

				if (res == 0) {
					pd(n);
					ps(" ");
					pd(m);
					stop = 1;
					break;
				}

				n++;

				j++;
				if (j % m == 0) {
					sq++;
				}

			}

			m++;

		}



		rep(j, 1, sqrt(x) + 1) {

			int res = x - j * j;
			if (res >= j * j) continue;

			int resroot = sqrt(res);

			int sq = round(res);
			if (res - sq < 1e6) {
				// res is a square

				// calculate m for n

				rep(k, 2, sq) {
					for (int l = 1; l < sq; l += k) {



					}

				}

			}

		}

		ps("\n");

	}

}