#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,l,d,r;
   long long ans;
   cin>>t;
   while(t--)
   {
       cin>>l>>r>>d;
       if(d<l || d>r)
       {
           cout<<d<<endl;
       }
       else
       {
           ans=1LL*(r/d +1)*d;
           cout<<ans<<endl;
       }
   }
}
