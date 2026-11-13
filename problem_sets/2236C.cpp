
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,x;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>x;

        int count=0;
        int ans=abs(a-b);

        while(a!=b)
        {
            if(a>b)
            {
                a=a/x;
            }
            else
            {
                b=b/x;
            }

            count++;

            ans=min(ans,count+abs(a-b));
        }

        cout<<ans<<endl;
    }
}

