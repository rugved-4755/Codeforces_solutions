#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,n,t,sum,l,ans;
  int arr[100000];
  cin>>n>>t;
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  l=0,sum=0,ans=0;
  for(i=0;i<n;i++)
  {
    sum += arr[i];

        while(sum > t)
        {
            sum -= arr[l];
            l++;
        }

        ans = max(ans, i - l + 1); 
  }
  cout<<ans;
} 

