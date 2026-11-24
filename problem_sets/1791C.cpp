#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,ans,s,e;
   string str;
   cin>>t;
   while(t--)
   {
       cin>>n;
       cin>>str;
       ans=n;
       s=0;
       e=n-1;
       while(s<e)
       {
           if(str[s]!=str[e])
           {
               s++;
               e--;
               ans=ans-2;
               
           }
           else
           {
               break;
           }
       }
       cout<<ans<<endl;
       
   }
   
}
