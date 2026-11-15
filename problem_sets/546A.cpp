#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,ans,price;
    cin>>k>>n>>w;
    price=(w*k*(1+w))/2;
    ans=price-n;
    if(ans>=0)
    {
        cout<<ans;
    }
    else
    {
        cout<<"0";
    }
}
