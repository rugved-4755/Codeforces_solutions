#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,a,b,maxi,mini,ans;
  cin>>t;
  while(t--)
  {
      cin>>a>>b;
      maxi=max(a,b);
      mini=min(a,b);
      if((maxi-mini)%10==0)
      ans=(maxi-mini)/10;
      else
      ans=(maxi-mini)/10+1;
      cout<<ans<<endl;
      
  }
   
}
