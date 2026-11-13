#include<bits/stdc++.h>
using namespace std;
int main()
{ int i,n,k,store;
  int arr[50];
  int ans=0;
  cin>>n>>k;
  for( i=0;i<n;i++)
  {
      cin>>arr[i];
      if(i==k-1)
      store=arr[i];
  }

  for( i=0;arr[i]>=store && arr[i]>0 && i<n;i++)
  {
      ans++;
  }
  
    cout<<ans;
}
