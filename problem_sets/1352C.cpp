#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,till_done,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n>k)
        {
            cout<<k<<endl;
        }
        else
        {
            if(k%(n-1)==0)
            {
                ans=n*(k/(n-1))-1;
            }
            else{
            till_done=(n-1)*(k/(n-1));
            ans=n*(k/(n-1))+(k-till_done);
            }
            cout<<ans<<endl;
        }
    }
}
