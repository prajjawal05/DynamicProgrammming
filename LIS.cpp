#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[n]={1};
    int j=1,i=0;
    for(j=1;j<n;j++)
    {
        for(i=0;i<j;i++)
        {
            if(a[i]<a[j])
                b[j] = max(b[i]+1,b[j]);
        }
    }
    int l= 0;
    for(i=0;i<n;i++)
        l =max(l,b[i]);
    cout<<l;    
    return 0;
}
