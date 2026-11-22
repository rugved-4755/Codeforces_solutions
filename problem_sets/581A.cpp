#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int ans1,ans2;
    cin>>a>>b;
    ans1=min(a,b);
    ans2=(max(a,b)-min(a,b))/2;
    cout<<ans1<<" "<<ans2;
}
