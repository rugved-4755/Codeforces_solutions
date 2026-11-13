#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,x,diff,now,prev,i,temp,ans;
   cin>>t;
   while(t--)
   {
       cin>>n>>x;
       prev=0;
       cin>>temp;
       now=temp;
       diff=now-prev;
       ans=diff;
       for(i=1;i<n;i++)
       {
           cin>>temp;
           prev=now;
           now=temp;
           diff=now-prev;
           if(diff>ans)
           ans=diff;
        }
        diff=2*(x-now);
        if(diff>ans)
        ans=diff;
        cout<<ans<<endl;
   }
   
}
