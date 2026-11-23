#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int t,n,ans;
    cin>>t;
    while(t--)
    {   ans=0;
        cin>>n;
        while(n!=0)
        {
            ans=ans+n%10;
            n=n/10;
        }
        cout<<ans<<endl;
    }
    
}
