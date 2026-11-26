#include<bits/stdc++.h>
using namespace std;

int main()
{   int x,i;
    string s;
    cin>>s;
    x=s.length();
    for(i=0;i<x;i++)
    {
        if(s[i]>='5')
        {   if(i==0 && s[i]=='9')
            {
                continue;
            }
            s[i]='9'-s[i]+'0';
        }
    }
    cout<<s;
} 

