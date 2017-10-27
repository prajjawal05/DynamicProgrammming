#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define itr iterator
#define ritr reverse_iterator
#define pint pair<int, int>
#define pll pair<ll, ll>
#define S second
#define F first
#define v(a) vector<a>
#define mk(a, b) make_pair(a, b)
#define psh(a) push_back(a)
#define mem(arr, a) memset(arr, a, sizeof(arr))
#define pr(n) printf("%d\n", n)
#define sc(n) scanf ("%d", &n)
#define scll(n) scanf ("%lld", &n)
#define prll(n) printf("%lld\n", n)
#define MOD 1000000007ll
#define inf 1000000000ll

int dp[1010][1010];

int cal (int k, int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		dp[1][i] = i;
	}
	int c;
	for (i = 2; i <= k; i++) {
		for (c = 1; c <= n; c++)
			for (j = 1; j <= c; j++) {
				if (!dp[i][c]) {
					dp[i][c] = 1 + max (dp[i-1][j-1], dp[i][c-j]);
				}else {
					dp[i][c] = min (dp[i][c], 1 + max (dp[i-1][j-1], dp[i][c-j]));
				}
			}
	}
	return dp[k][n];
}

int main (void) {

	int test;
	sc (test);

	while (test--) {
		int t, k, n;
		mem (dp, 0);
		sc (t), sc(k), sc(n);
		cout<<t<<" "<<cal(k, n)<<endl;
	}

	return 0;
}
