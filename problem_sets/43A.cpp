#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int new_num;
    string s1,s2,temp;
    cin>>n;
    cin>>s1;
    new_num=n;
    ans++;
    new_num--;
    while(new_num!=0)
    {   
        cin>>temp;
        if(temp==s1)
        ans++;
        else
        s2=temp;
        new_num--;
    }
    if(2*ans>=n)
    cout<<s1;
    else
    cout<<s2;
    
}
