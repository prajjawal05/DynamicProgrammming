//Digit Dynamic Programming

void calculate()
{
    a[1]=45;
    long long int d = 10;
    for(int i=2;i<=10;i++)
    {
        a[i] = a[i-1]*10 + 45*d;
        d *= 10;
    }
    return;
}

long long int ans(long long int n)
{
    if(n==0)
        return 0;
    long long int sum=0,d,w,p=1,msd,rest;
    d = log10(n);   //log10 can cause TLE
    w = a[d];   //or w=45*p/10*d;
    for(int i=0;i<d;i++)
        p*=10;
    msd = n/p;
    rest = n%p;
    return msd*w + p*msd*(msd-1)/2 + msd*(rest+1) + ans(rest); 
}
