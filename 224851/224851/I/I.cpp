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

struct point {
	int x, y;
};

point arr[100010];
point arr2[100010];

string ans[600010];
int ai = 0;

int main() {
	int n;
	sd(n);

	rep(i, 0, n) {
		sd(arr[i].x), sd(arr[i].y);
	}


	// Both sorts works. Although I do not understand why the if statement needs abs
	sort(arr, arr + n, [](point a, point b) {
		if (abs(a.x) == abs(b.x)) return abs(a.y) < abs(b.y);
		return abs(a.x) < abs(b.x);
	});

	//sort(arr, arr + n, [](point a, point b) {
	//	return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
	//});

	rep(i, 0, n) {

		point p = arr[i];

		if (p.x > 0) ans[ai++] = "1 " + to_string(abs(p.x)) + " R";
		if (p.x < 0) ans[ai++] = "1 " + to_string(abs(p.x)) + " L";
		if (p.y > 0) ans[ai++] = "1 " + to_string(abs(p.y)) + " U";
		if (p.y < 0) ans[ai++] = "1 " + to_string(abs(p.y)) + " D";

		ans[ai++] = "2";

		p.x *= -1;
		p.y *= -1;

		if (p.x > 0) ans[ai++] = "1 " + to_string(abs(p.x)) + " R";
		if (p.x < 0) ans[ai++] = "1 " + to_string(abs(p.x)) + " L";
		if (p.y > 0) ans[ai++] = "1 " + to_string(abs(p.y)) + " U";
		if (p.y < 0) ans[ai++] = "1 " + to_string(abs(p.y)) + " D";

		ans[ai++] = "3";
	}
	
	pd(ai); 
	ps("\n");
	rep(i, 0, ai) {
		ps(ans[i].c_str());
		ps("\n");
	}

}