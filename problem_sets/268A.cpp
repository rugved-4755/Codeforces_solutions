#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ans,j,i,n,temp;
   vector<int>home;
   vector<int>guest;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>temp;
       home.push_back(temp);
       cin>>temp;
       guest.push_back(temp);
   }
   
   ans=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           continue;
           else
           {
               if(home[i]==guest[j])
               ans++;
               
           }
       }
   }
   cout<<ans;
   
}
