#include<bits/stdc++.h>
using namespace std;
int main()
{
    int till_sum,temp,i,n,sum,ans;
    vector<int>arr;
    sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
        sum=sum+temp;
    }
    sort(arr.begin(),arr.end());
    till_sum=0;
    ans=0;
    for(i=n-1;i>=0;i--)
    {
        if(till_sum<=sum/2)
        {
            till_sum+=arr[i];
            ans++;  
        }
    }
    cout<<ans;
}
