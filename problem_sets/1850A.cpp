#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c,maxi,midi,mini,t;
  cin>>t;
  while(t--)
  {cin>>a>>b>>c;
  maxi=max(max(a,b),c);
  mini=min(min(a,b),c);
  midi=(a>b)?((b>c)?b:(a>c)?c:a):(a>c)?a:((b>c)?c:b);
  if(maxi+midi>=10)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }
  }
} 

