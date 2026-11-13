#include<bits/stdc++.h>
using namespace std;

int main()
{int t,n,a,b;
cin>>t;
while(t--)
{
    cin>>n>>a>>b;
    if(a>b)
    {
        cout<<"1"<<endl;
    }
    else
    {
        if(n%a==0)
        {
            cout<<n/a<<endl;
        }
        else
        {
            cout<<n/a+1<<endl;
        }
    }
    
}
}
