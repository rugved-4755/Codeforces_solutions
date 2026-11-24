#include<bits/stdc++.h>
using namespace std;

int main()
{
  float n,m,a,b,ans1,ans2,per_mride;
  cin>>n>>m>>a>>b;
  per_mride=b/m;
  if(per_mride<a)
  {
    ans1=(int(n)/int(m))*b+(int(n)%int(m))*a;
    ans2=((int(n)/int(m))+1)*b;
    ans1=min(ans1,ans2);
  }
  else
  {
      ans1=n*a;
  }
    cout<<int(ans1);
} 

