#include<iostream>
using namespace std;
 
int main()
{
 
 int n,m,a;
 long long ans=0;
 cin>>n>>m>>a;
 int temp;
 
 if(m>a)
 {
 if(m%a==0)
   {
       temp=m/a;
   }
   else
   {
       temp=(m/a)+1;
   }
 }
 else
 {
     temp=1;
 }
 
 if(n>a)
 {
 if(n%a==0)
 {
     ans=(long long)(n/a)*temp;
 }
 else
 {
     ans=(long long)((n/a)+1)*temp;
 }
 }
 else
 {
     ans=temp;
 }
 
 
 cout<<ans;
}
