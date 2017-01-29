#include<bits/stdc++.h>
using namespace std;

long long int res[105][105];

long long int select(long long int n,long long int r,long long int mod)
{
    //ncr = n-1cr-1 + n-1cr
    //cout<<n<<"    "<<r<<endl;
    if(res[n][r]!=0)
        return res[n][r];
    if(r==0 || r==n)
        return 1;
    if(r==1)
        return n;
    return res[n][r] = (select(n-1,r,mod)%mod + select(n-1,r-1,mod)%mod)%mod;   
}

//for n,r<= 104
