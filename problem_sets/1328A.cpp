#include<bits/stdc++.h>
using namespace std;
int main()
{   int t,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
        cout<<"0"<<endl;
        else
        {ans=b-(a%b);
        cout<<ans<<endl;
        }
    }
  
}
