#include<bits/stdc++.h>
using namespace std;

#define sc(x) scanf("%d",&x)
#define pr(x) printf("%d\n",x)

int knapsack(int wt[],int val[],int W,int n)
{
    int dp[W+1] = {0};
    for(int i=0;i<=W;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(wt[j]<=i)
                dp[i] = max(dp[i],dp[i-wt[j]]+val[j]);
        }
    }
    return dp[W];
}
