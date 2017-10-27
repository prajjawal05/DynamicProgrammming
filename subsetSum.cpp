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

bool subsetSum (int n, int * arr, int sum) {
	int i, j;bool dp[sum+1];
	for (i = 0; i <= sum; i++) {
		dp[i] = false;
	}

	dp[0] = true;
	for (i = 0; i < n; i++) {
		for (j = sum; j >= arr[i] ; j--) {  // Notice from sum to arr[i] not from arr[i] to sum, and you know the reason
			if (j >= arr[i]){
				if (dp[j-arr[i]]) {
					dp[j] = true;
				}
			}
		}
	}
	return dp[sum];
}

int main (void) {
	int test;
	sc (test);
	while (test--) {
		int n;
		sc (n);
		int i, arr[n];
		for (i = 0; i < n; i++) {
			sc (arr[i]);
		}

		int sum = 0;
		for (i = 0; i < n; i++) {
			sum += arr[i];
		}

		if (sum % 2 == 1) {
			cout<<"NO\n";
			return 0;
		}

		sum = sum / 2;
		if (subsetSum (n, arr, sum)){
			cout<<"YES\n";
		}else {
			cout<<"NO\n";
		}
	}
	return 0;
}
