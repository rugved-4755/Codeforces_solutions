#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,upper,lower,i,j,x,flag;
    string s;
    cin>>n;
    if(n<26)
    cout<<"NO";
    else
    {   cin>>s;
        x=s.length();
        for(i=0;i<26;i++)
        {   flag=0;
            lower='a'+i;
            upper='A'+i;
            for(j=0;j<x;j++)
            {
                if(int(s[j])==upper || int(s[j])==lower)
                {
                   flag=1; 
                   break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";   
        }
    }
}
