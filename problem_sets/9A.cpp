#include<bits/stdc++.h>
using namespace std;

int main()
{   int fav,maxi,a,b;
    cin>>a>>b;
    maxi=max(a,b);
    fav=7-maxi;
    if(fav==6)
    cout<<"1/1";
    else if(fav==5)
    cout<<"5/6";
    else if(fav==4)
    cout<<"2/3";
    else if(fav==3)
    cout<<"1/2";
    else if(fav==2)
    cout<<"1/3";
    else
    cout<<"1/6";
    
}

