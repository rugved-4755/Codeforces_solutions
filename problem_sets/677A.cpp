#include<bits/stdc++.h>
using namespace std;


int main()
{   int ans,temp,i,n,h,exceed;
    exceed=0;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>h)
        {
            exceed++;
        }
    }
    ans=n+exceed;     //exceed*2+(n-exceed)
    cout<<ans;
}
