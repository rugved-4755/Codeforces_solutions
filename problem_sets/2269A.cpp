#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,k,t,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans=pow(2,n-k+1)+2*k-2;
        cout<<ans<<endl;
    }
}
