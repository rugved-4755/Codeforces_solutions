#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int i,t,n,temp,maxi,now;
    cin>>t;
    while(t--)
    {
        cin>>n;
        maxi=0;
        now=0;
        
        for(i=1;i<=n;i++)
        {   
            cin>>temp;
        
            if (temp == 0)
            {
                now++;
                maxi = max(maxi,now);
            } 
            else 
            {
                now = 0;
            }
            
           
            
        }
        cout<<maxi<<endl;
        
    }
}
