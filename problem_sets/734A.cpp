#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,anton;
    string s;
    cin>>n;
    cin>>s;
    anton=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        anton++;
    }
    if(anton>n/2.0)
    cout<<"Anton";
    else if(anton==n/2.0)
    cout<<"Friendship";
    else if(anton<n/2.0)
    cout<<"Danik";
    
}
