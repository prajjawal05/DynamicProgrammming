#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length(),l2=s2.length();
    int x[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if(i==0||j==0)
                x[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                x[i][j] = 1+x[i-1][j-1];
            else 
                x[i][j] = max(x[i-1][j],x[i][j-1]);
        }
    }
    cout<<x[l1][l2]<<endl;
}
