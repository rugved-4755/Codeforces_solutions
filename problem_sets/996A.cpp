#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   int arr[]={100,20,10,5,1};
   int n,ans,i;
   ans=0;
   cin>>n;
   i=0;
   while(n!=0)
   {
       ans=ans+(n/arr[i++]);
       n=n%arr[i-1];
   }
   cout<<ans;
}
