#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,rem,i,temp,ans;
   int arr[100];
   cin>>n;
   for(i=0;i<=n;i++)
   {
    cin>>arr[i];
   }
   for(i=0;i<n-1;i++)
   {
       if(arr[i]%2!=arr[i+1]%2)
       {
           temp=i;
       
       if(i==n-2)
       {
        if(arr[0]%2==arr[i]%2)
        {
            ans=i+2;
            break;
        }
        else
        {
            ans=i+1;
            break;
        }
       }
       else
       {
           if(arr[i+2]%2==arr[i]%2)
           {
               ans=i+2;
               break;
           }
           else
           {
               ans=i+1;
               break;
           }
       }
      }
   }
   cout<<ans;
}
