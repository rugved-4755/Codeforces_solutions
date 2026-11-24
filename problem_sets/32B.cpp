#include<bits/stdc++.h>
using namespace std;

int main()
{
  int ans=0,i,x;
  string s;
  cin>>s;
  x=s.length();
  for(i=0;i<x;i++)
  {
      if(s[i]=='-')
      {
          if(s[i+1]=='.')
          cout<<"1";
          else
          cout<<"2";
          i++;
      }
      else   //s[i]=='.'
      {
          cout<<"0";
      }
  }
}
