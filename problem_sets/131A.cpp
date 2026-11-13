#include<bits/stdc++.h>
using namespace std;

void lowercase(string &s,int index)
{
    for(int i=index;i<s.length();i++)
    {
        s[i]=s[i]-'A'+'a';
    }
}


bool condition1(string &s,int index)
{   
    bool ans=1;
    for(int i=index;i<s.length();i++)
    {
        if(s[i]>'Z')
        ans=0;
    }
    return ans;
}

bool condition2(string &s)
{
    if(s[0]>='a' && condition1(s,1))
    {
      return 1;
    }
    return 0;
    
}








int main()
{
    string s;
    cin>>s;
    if(condition1(s,0))
    {
        
        lowercase(s,0);
    }
    else if(condition2(s))
    {
        s[0]=s[0]-'a'+'A';
        lowercase(s,1);
    }
   cout<<s;
}
