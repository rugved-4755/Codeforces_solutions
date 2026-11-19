#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 int i,n,ans;
 ans=0;
 cin>>n;
 for(i=1;i<=n;i++)
 {
     cin>>s;
     if(s=="Tetrahedron")
     {
         ans=ans+4;
     }
     else if(s=="Cube")
     {
         ans=ans+6;
     }
     else if(s=="Octahedron")
     {
         ans=ans+8;
     }
     else if(s=="Dodecahedron")
     {
         ans=ans+12;
     }
     else
     {
         ans=ans+20;
     }
 }
 cout<<ans;
}
