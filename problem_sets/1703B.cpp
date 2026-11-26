#include<bits/stdc++.h>
using namespace std;

int find_occurance(string s,int i)
{
    int j,ans=0;
    for(j=i;s[j]==s[i] && j<s.length();j++)
    {
        ans++;
    }
    return ans;
}





int main()
{
    int i,t,x,ans,occurance,n;
    string s;
    cin>>t;
    while(t--)
    {   ans=0;
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        for(i=0;i<n;i++)
        {
            occurance=find_occurance(s,i);
            i=i+occurance-1;
            ans=ans+(occurance+1);
            
        }
        cout<<ans<<endl;
    }
    
    
}

