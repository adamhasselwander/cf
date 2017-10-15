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

//
//int arr[1000][1000];
//int hor[2][1000];
//int ver[2][1000];
//int firstver[1000] = {};
//
//int main2() {
//	int n, m, t;
//	sd(n); sd(m);
//	rep(i, 0, n) {
//		bool first = 0;
//		rep(j, 0, m) {
//			sd(t);
//			if (t) {
//
//				if (!first) hor[0][i] = j + 1;
//
//				if (!firstver[j]) ver[0][j] = i + 1;
//
//				firstver[j] = first = 1;
//
//				hor[1][i] = j + 1;
//				ver[1][j] = i + 1;
//			}
//			arr[i][j] = t;
//		}
//	}
//
//	long score = 0;
//	rep(i, 0, n) {
//		rep(j, 0, m) {
//			if (!arr[i][j]) {
//
//				if (hor[0][i] && hor[0][i] - 1 < j) score++;
//				if (hor[1][i] && hor[1][i] - 1 > j) score++;
//
//				if (ver[0][j] && ver[0][j] - 1 < i) score++;
//				if (ver[1][j] && ver[1][j] - 1 > i) score++;
//			}
//		}
//	}
//
//	pd(score);
//	return 0;
//}