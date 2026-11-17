#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int i,n,least_max=0,highest_small=0,ans;
    int arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[least_max]<arr[i])
        {
            least_max=i;
        }
        if(arr[highest_small]>=arr[i])
        {
            highest_small=i;
        }
    }
   
    if(least_max<highest_small)
    {
        ans=least_max+(n-1-highest_small);
    }
    else
    {
        ans=least_max+(n-1-highest_small)-1;
    }
    cout<<ans;
}
