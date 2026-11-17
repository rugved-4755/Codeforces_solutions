#include<bits/stdc++.h>
using namespace std;
int main()
{   string s1,s2,s_ans;
    cin>>s1>>s2;
    int i,x;
    x=s1.length();
    for(i=0;i<x;i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
  
}
