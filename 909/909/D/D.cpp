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



char line[1000001];
int g[1000001];
int grem = 0;

struct cntstruct {
	char c;
	int cnt;
};
int ci = -1;

list<cntstruct> arr;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> line;

	rep(i, 0, 1000004) {
		if (line[i] == 0)
			break;

		int j = i;
		while (line[j] == line[i + 1]) i++;

		arr.push_back({ line[i], i - j + 1 });		
	}
	
	int score = 0;
	while (arr.size() > 1) {
			
		int minops = 10000000;
		for (auto l = arr.begin(); l != arr.end(); l++) minops = min(minops, (int)ceil((double)(*l).cnt / 2.0));
		
		minops = min(minops, (*arr.begin()).cnt);
		minops = min(minops, (*--arr.end()).cnt);

		(*arr.begin()).cnt -= 1 * minops;
		(*--arr.end()).cnt -= 1 * minops;

		auto it = next(arr.begin());
		while(true) {
			if (it == arr.begin()) it = next(arr.begin());
			if (it == arr.end() || it == --arr.end() || it == --(--arr.end())) break;

			(*it).cnt -= 2 * minops;

			if ((*it).cnt <= 0) {

				auto j = it;
				j++;
				it--;
				int c = 0;
				while (it != arr.begin() && j != arr.end() && (*it).c == (*j).c) {
					(*it).cnt += (*j).cnt;
					j++;
					c++;
				}
				auto t = it;
				arr.erase(++it, j);
				it = t;
				rep(z, 0, c) if (it != arr.begin()) it--;

			}
			it++;
		}

		if (arr.size() > 0 && (*arr.begin()).cnt <= 0) {
			arr.erase(arr.begin());
		}

		if (arr.size() > 0 && (*--arr.end()).cnt <= 0) {
			arr.erase(--arr.end());
		}

		score += minops;

	}

	pd(score);

}