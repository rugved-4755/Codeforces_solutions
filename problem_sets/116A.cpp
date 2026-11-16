#include<bits/stdc++.h>
using namespace std;

int main()
{  int i,now=0,enter,depart,max,n;
    max=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>depart;
        cin>>enter;
        now=now+enter-depart;
        if(now>max)
        max=now;
    }
    cout<<max;

}
