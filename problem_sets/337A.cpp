#include<bits/stdc++.h>
using namespace std;


int diff(vector<int>arr,int i,int n)
{   int ans;
    ans=arr[i+n-1]-arr[i];
    return ans;
}





int main()
{
    int mini,temp,i,n,m;
    vector<int>arr;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    mini=INT_MAX;
    for(i=0;i<=m-n;i++)
    {
        temp=diff(arr,i,n);
        if(temp<mini)
        {
            mini=temp;
        }
    }
    cout<<mini;
}


