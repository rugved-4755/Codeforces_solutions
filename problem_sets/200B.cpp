#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,temp;
    float sum=0,ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>temp;
        sum=sum+temp;
    }
    
    ans=sum/n;
    cout<<ans;
    
}
