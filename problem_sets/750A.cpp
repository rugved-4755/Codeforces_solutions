#include<bits/stdc++.h>
using namespace std;
int main()
{
 int sum,n,k,remaining,i;
 cin>>n>>k;
 remaining=240-k;
 sum=0;
 for(i=0;5*(i+1)<=remaining && (i+1)<=n;i++)
 {  
     remaining=remaining-5*(i+1);
    
 }
 cout<<i;
}    

