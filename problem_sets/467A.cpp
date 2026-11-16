#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,q,ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p>>q;
        if(q-p>=2)
        ans++;
    }
    cout<<ans;
}
