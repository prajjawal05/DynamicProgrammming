#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2; //make s1 similar to s2
    int l1=s1.length();
    int l2=s2.length();
    int ed[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if(i==0)
                ed[i][j] = j;
            else if(j==0)
                ed[i][j] = i;
            else if(s1[i-1] == s2[j-1])
                ed[i][j] = ed[i-1][j-1];
            else
                ed[i][j] = 1 + min(ed[i-1][j-1],min(ed[i][j-1],ed[i-1][j]));
        }
    }
    cout<<ed[l1][l2]<<endl;
    return 0;
}
