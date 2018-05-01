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

int n, k, m;
int arr[50];
int sub[50];
int result = 0;
int task_tot_time = 0;

void take(int score, int t) {

	if (0 >= t) return;

	// Take as many subtasks as possible
	// Take another task

	int tt = t;
	int ss = score;
	rep(i, 0, k) {
		int su = sub[i];
		while (su > 0) {
			if (arr[i] > tt) break;
			ss++;
			tt -= arr[i];
			su--;
		}
	}

	result = max(result, ss);

	if (t >= task_tot_time) {
		int task_left = sub[0];
		rep(i, 1, k) task_left = min(task_left, sub[i]);

		if (task_left == 0) return;

		rep(i, 0, k) sub[i]--;
		result = max(result, score + k + 1);
		take(score + k + 1, t - task_tot_time);
	}
}

int main() {
	sd(n), sd(k), sd(m);
	rep(i, 0, k) {
		sd(arr[i]);
		task_tot_time += arr[i];
	}
	rep(i, 0, k) sub[i] = n;

	sort(arr, arr + k);

	// try to solve as many tasks as possible (if no time left tkae the easiest)
	// try to only solve the easiest problems

	take(0, m);

	pd(result);

}