#include<bits/stdc++.h>
using namespace std;


int main()
{   int x,i;
    bool ans=1;
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
    cout<<"NO";
    else
    {
        x=s1.length();
        for(i=0;i<x;i++)
        {
          if(s1[i]!=s2[x-i-1])
          {
              ans=0;
              break;
          }
        }
        if(ans==0)
        cout<<"NO";
        else
        cout<<"YES";
    }
}
