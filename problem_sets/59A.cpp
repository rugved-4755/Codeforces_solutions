#include<bits/stdc++.h>
using namespace std;


void lower_case(string &s,int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(s[i]<='Z')
        {
            s[i]=s[i]-'A'+'a';
        }
    }
}


void upper_case(string &s,int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(s[i]>='a')
        {
            s[i]=s[i]-'a'+'A';
        }
    }
}


int main()
{
    string s;
    cin>>s;
    int i,x,lower=0,upper=0;
    x=s.length();
    for(i=0;i<x;i++)
    {
        if(s[i]<='Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if(upper<=lower)
    {
        lower_case(s,x);   
    }
    else
    {
        upper_case(s,x);
    }
    cout<<s;
    
    
}


