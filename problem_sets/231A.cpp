#include<iostream>
using namespace std;
int main()
{
    int t,numof_one,temp,ans;
    ans=0;
    cin>>t;
    while(t--)
    {   
        numof_one=0;
        for(int i=1;i<=3;i++)
        {
            cin>>temp;
            if(temp==1)
            numof_one++;
        }
        if(numof_one>=2)
        ans++;
    }
    cout<<ans;
}
