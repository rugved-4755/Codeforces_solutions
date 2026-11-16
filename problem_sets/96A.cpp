#include<bits/stdc++.h>
using namespace std;

int check(string s,int i)
{
    int ans=2;
    for(int j=i+2;j<s.length();j++)
    {
        if(s[j]==s[i])
        ans++;
        else
        {
            break;
        }
    }
    return ans;
}


int main()
{   int ans,i,flag=0;
    string s;
    cin>>s;
    int x=s.length();
        for(i=0;i<x-6;i++)
        {
            if(s[i]==s[i+1])
            {
                ans=check(s,i);
                if(ans>=7)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        cout<<"YES";
        else
        cout<<"NO";

    
}
