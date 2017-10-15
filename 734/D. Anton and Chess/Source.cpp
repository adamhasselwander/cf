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


struct piece
{
	int x, y;
	char type;
};

void geti(int &x)
{
	int c = getchar();
	x = 0;
	int neg = 0;
	for (; ((c<48 || c>57) && c != '-'); c = getchar());
	if (c == '-') { neg = 1; c = getchar(); }
	for (; c>47 && c<58; c = getchar()) { x = (x << 1) + (x << 3) + c - 48; }
	if (neg) x = -x;
}

void getc(char &c) {
	c = getchar();
}

const int INF = 100000001LL;
int main() {
	int n;
	sd(n);
	int x, y, xx, yy;
	sd(x); sd(y);
	char c;
	getc(c);


	piece p[8];

	p[0] = p[1] = p[2] = p[3] = p[4] = p[5] = p[6] = p[7] = { INF, INF, 0 };

	rep(i, 0, n) {
		
		getc(c);
		geti(xx);
		geti(yy);

		if (x == xx && y > yy && (p[0].y == INF || p[0].y < yy)) 
			p[0] = { xx, yy, c == 'B' ? 'B' : 'R' };
		else if (x == xx && y < yy && (p[1].y == INF || p[1].y > yy)) 
			p[1] = { xx, yy, c == 'B' ? 'B' : 'R' };
		else if (y == yy && x > xx && (p[2].x == INF || p[2].x < xx)) 
			p[2] = { xx, yy, c == 'B' ? 'B' : 'R' };
		else if (y == yy && x < xx && (p[3].x == INF || p[3].x > xx)) 
			p[3] = { xx, yy, c == 'B' ? 'B' : 'R' };

		if (abs(x - xx) != abs(y - yy)) continue;

		if (xx > x && yy > y && (p[4].x > xx || p[4].x == INF)) 
			p[4] = { xx, yy, c == 'R' ? 'R' : 'B' };
		else if (xx > x && yy < y && (p[5].x > xx || p[5].x == INF)) 
			p[5] = { xx, yy, c == 'R' ? 'R' : 'B' };
		else if (xx < x && yy > y && (p[6].x < xx || p[6].x == INF)) 
			p[6] = { xx, yy, c == 'R' ? 'R' : 'B' };
		else if (xx < x && yy < y && (p[7].x < xx || p[7].x == INF)) 
			p[7] = { xx, yy, c == 'R' ? 'R' : 'B' };
	}

	if (p[4].type == 'B' ||
		p[5].type == 'B' ||
		p[6].type == 'B' ||
		p[7].type == 'B' ||
		p[0].type == 'R' ||
		p[1].type == 'R' ||
		p[2].type == 'R' ||
		p[3].type == 'R') {
		ps("YES");
	}
	else {
		ps("NO");
	}
}