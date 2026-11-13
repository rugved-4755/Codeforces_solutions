#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   int t,n,i,ans;
   cin>>t;
   while(t--)
   {
       ans=0;
       cin>>n>>s;
       if(s[0]!='R')
       {
           ans++;
       }
       for(i=0;i<n-1;i++)
       {
           if(s[i]==s[i+1])
           ans++;
       }
       cout<<ans<<endl;
   }
  
       
   
}
