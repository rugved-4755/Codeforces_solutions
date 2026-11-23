#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp,mini,maxi,ans;
    ans=0;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        cin>>temp;
        if(i==1)
        {   
            maxi=temp;
            mini=temp;
            continue;
        }
        else
        {
            if(temp>maxi)
            {
                ans++;
                maxi=temp;
            }
            else if(temp<mini)
            {
                mini=temp;
                ans++;
            }
            
        }
        
    }
    cout<<ans;
}


