#include<bits/stdc++.h>
using namespace std;

int replace(string &s)
{   int i,flag=1;
    int x=s.length();
    for(i=0;i<x-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='G')
        {
         swap(s[i],s[i+1]);
         flag=0;
         i++;
        }
    }
    return flag;
}


int main()
{  int n,i,t,result;
    cin>>n>>t;
   string s;
   cin>>s;
   for(i=1;i<=t;i++)
   {
       result=replace(s);
       if(result==1)
       break;
   }
   cout<<s;
}
