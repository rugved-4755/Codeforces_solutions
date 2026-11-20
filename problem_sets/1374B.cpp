#include<bits/stdc++.h>
using namespace std;

int expo(int &n,int a)
{
    int ans=0;
    while(n%a==0)
    {
        ans++;
        n=n/a;
    }
    return ans;
}



int main()
{  
    int n,t,expo_2,expo_3,ans;
    cin>>t;
    while(t--)
    {   ans=-1;
        cin>>n;
        expo_2=expo(n,2);
        expo_3=expo(n,3);
        if(n!=1)
        {
            cout<<ans<<endl;
        }
        else
        {
            if(expo_2==expo_3)
            {
                ans=expo_2;
            }
            else if(expo_2<expo_3)
            {
                ans=2*expo_3-expo_2;
            }
            cout<<ans<<endl;
        }
        
    }
}
