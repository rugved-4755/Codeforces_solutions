#include<bits/stdc++.h>
using namespace std;

int main()
{   int t,i,ans;
    string s1,s2;
    s1="codeforces";
    cin>>t;
    while(t--)
    {   ans=0;
        cin>>s2;
        for(i=0;i<=9;i++)
        {
            if(s1[i]!=s2[i])
            ans++;
        }
        cout<<ans<<endl;
    }
}

