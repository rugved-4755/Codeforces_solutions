#include<iostream>
using namespace std;
int main()
{
    int n,ans=1;
    cin>>n;
    while(n!=1)
    {if(n%2==1)
     {ans++;}
     n=n/2;
     
    }
    cout<<ans;
}
