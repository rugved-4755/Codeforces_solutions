#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum,i,n,m,temp,count;
    vector<int>arr;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    sum=0;
    count=0;
    for(i=0;i<n && count<m;i++)
    {
        if(arr[i]<0)
        {
            sum=sum-arr[i];
            count++;
        }
    }
    cout<<sum;
}

