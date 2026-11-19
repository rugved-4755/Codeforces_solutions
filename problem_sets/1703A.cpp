#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;
    int i,t,flag;
    cin>>t;
    string caps="YES";
    string low="yes";
    while(t--)
    {   cin>>s;
        flag=1;
        for(i=0;i<3;i++)
        {
            if(s[i]!=caps[i] && s[i]!=low[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
}
