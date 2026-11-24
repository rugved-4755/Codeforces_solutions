#include<bits/stdc++.h>
using namespace std;

int main()
{   int n,i,temp,max,ans;
    vector<int>arr;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    max=arr[n-1];
    ans=0;
    for(i=0;i<n-1;i++)
    {
        ans=ans+max-arr[i];
    }
    cout<<ans;
} 

