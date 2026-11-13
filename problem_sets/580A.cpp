#include<bits/stdc++.h>
using namespace std;

int find_inc_len(int arr[],int i,int n)
{   
    int ans=1;
    for(int j=i;j<n-1;j++)
    {
        if(arr[j]<=arr[j+1])
        {
            ans++;
        }
        else
        break;
    }
    
    return ans;
    
}


int main()
{
    int n,i,x,max;
    max=-1;
    int arr[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        x=find_inc_len(arr,i,n);
        if(x>max)
        {
            max=x;
        }
        i=i+x-1;
    }
    cout<<max;
}
