#include<bits/stdc++.h>
using namespace std;

int find_sum(vector<int> arr,int index,int remaining)
{
    int inc=0;
    while(remaining>0 && index<arr.size())
    {
        if(arr[index]<=remaining)
        {
            remaining=remaining-arr[index];
            index++;
            inc++;
            
        }
        else
        {
            return inc;
        }
    }
}






int main()
{
    int n,m,ans,i,inc,remaining;
    vector<int>arr;
    cin>>n>>m;
    arr.resize(n);
    ans=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        ans++;
        else if(arr[i]<m)
        {
            if(i!=n-1)
            {   remaining=m-arr[i];
                inc=find_sum(arr,i+1,remaining);
                i=i+inc;
                ans++;
            }
            else
            {
             ans++;   
            }
        }
        else
        {
         if(arr[i]%m==0)
         {
             ans=ans+arr[i]/m;
             i=i+(arr[i]/m)-1;
         }
         else
         {
             remaining=m-arr[i]%m;
             if(i!=n-1)
             {
                inc=i+find_sum(arr,i+1,remaining);
                i=i+inc;
                ans=ans+(arr[i]/m)+1;
             }
             else
             {
                 ans++;
             }
         }
        }
    }
    cout<<ans;
}
