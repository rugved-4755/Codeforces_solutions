#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int p,q,r,s,maxi;
    cin>>p>>q>>r>>s;
    maxi=max(max(p,q),max(r,s));
    
    if(maxi!=p)
    cout<<maxi-p<<" ";
    if(maxi!=q)
    cout<<maxi-q<<" ";
    if(maxi!=r)
    cout<<maxi-r<<" ";
    if(maxi!=s)
    cout<<maxi-s<<" ";
}
