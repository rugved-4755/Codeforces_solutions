#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,max,min,mid;
   cin>>a>>b>>c;
   max=(a>b)?((a>c)?a:c):((b>c)?b:c);
   min=(a<b)?((a<c)?a:c):((b<c)?b:c);
   //mid=(a>b)?((b>c)?b:(a>c)?c:a):(a>c)?a:((b>c)?c:b);
   cout<<max-min;
   
}
