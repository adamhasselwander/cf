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

// 8   8
// 6   16
// 4   24
// 2   32
// 0   40
// 8   48
// 6   56
// 4   64
// 2   72
// 0   80
// 8   88
// 6   96
// 4   104
// 2   112
// 0   120
// 8   128
// 6   136
// 4   144
// 2   152
// 0   160
// 8   168
   
// if 0 (num / 4) == floor(num / 4)
// if 2 ((num + 1) / 4) == floor((num + 1) / 4))
// if 4 ((num + 2) / 4) == floor((num + 2) / 4))
// if 6 ((num + 3) / 4) == floor((num + 3) / 4))
// if 8 ((num + 4) / 4) == floor((num + 4) / 4))


vi eights;

int main() {

	int n;
	sd(n);

	int curr = 8;
	while (curr <= n) {
		eights.push_back(curr);
		curr += 8;
	}

	// take i digits from index j and check if the number is in eights, if it is continue from 

}






