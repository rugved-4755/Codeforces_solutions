#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,temp,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=n/2;
        ans=temp*(n-temp);
        cout<<ans<<endl;
    }
}
