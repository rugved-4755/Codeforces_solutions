#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r,k,t,i,temp,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r>>k;
        vector<int>arr;
        ans=0;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        
        for(i=0;k-arr[i]>=0 && i<n;i++)
        {
            if(arr[i]>=l && arr[i]<=r)
            {
                ans++;
                k=k-arr[i];
            }
        }
        cout<<ans<<endl;
    }
}
