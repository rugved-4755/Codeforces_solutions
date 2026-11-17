#include<bits/stdc++.h>
using namespace std;

int find_element(vector<int>arr,int num,int start)
{
    int i,ans=-1,x;
    x=arr.size();
    for(i=start;i<x;i++)
    {
        if(arr[i]==num)
        {
            ans=i+1;
            return ans;
        }
    }
    return ans;
}


int main()
{   int n,i,j,temp,next_start,flag;
    bool is_present;
    vector<int>arr;
    cin>>n;
    cin>>j;
    for(i=0;i<j;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    cin>>j;
    for(i=0;i<j;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    next_start=0;
    for(i=1;i<=n;i++)
    {   flag=1;
        next_start=find_element(arr,i,next_start);  //array,no to find,to start with
        if(next_start==-1)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Oh, my keyboard!";
    }
    else
    {
        cout<<"I become the guy.";
    }
}
