nt knapsack(int n,int w,int wt[],int v[])
{
    int a[n+1][w+1];x=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)
                a[i][j]=0;
            if(wt[i-1]>j)
                a[i][j] = a[i-1][j];
            else
                a[i][j] = max(a[i-1][j], v[i-1]+a[i-1][j-wt[i-1]]);
        }
    }
    int i=n,j=w;
    while(i>0)
    {
      if(a[i][j]-a[i-1][j-wt[i-1]] == v[i-1])
      {
        x+=wt[i-1];                                           //sum of the weights included
        i--;
        j-=wt[i];

      }
      else
        i--;
    }
    return a[n][w];
}
