#include<bits/stdc++.h>
using namespace std;
int main()
{   int j,i,ans=1,flag;
   int arr[4];
   for(i=0;i<4;i++)
   {
       cin>>arr[i];
   }
   
   for(i=1;i<4;i++)
   {    flag=1;
       for(j=i-1;j>=0;j--)
       {
           if(arr[i]==arr[j])
           {
               flag=0;
               break;
           }
       }
       if(flag==1)
       ans++;
   }
   cout<<4-ans;
}
