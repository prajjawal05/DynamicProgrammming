vector<int> l[n];
l[0].push_back(a[0]);

for(int j=1;j<n;j++)
{
  for(int i=0;i<j;i++)
  {
    if(a[i]<a[j] && l[i].size()>=l[j].size())
      l[j] = l[i];
  }
  l[j].push_back(a[j]);
}
