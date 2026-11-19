#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,a,b,c,min,max,mid;
 cin>>t;
 while(t--)
 {
     cin>>a>>b>>c;
     max=(a>b)?((a>c)?a:c):((b>c)?b:c);
     min=(a<b)?((a<c)?a:c):((b<c)?b:c);
     mid=(a>b)?(b>c?b:(a>c)?c:a):(a>c?a:(b>c)?c:b);
     if(min+mid==max)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
}
}
