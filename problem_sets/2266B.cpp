#include<iostream>
using namespace std;
int main()
{
int t,a,b,c,ans;
cin>>t;
while(t--)
{
cin>>a>>b>>c;
if(a>=b)
{ans=a+c-b;
}
else
{
if(a+c-b>b-a)
{ans=a+c-b;
}
else
{
ans=b-a;
}
}
cout<<ans<<endl;
}
}
