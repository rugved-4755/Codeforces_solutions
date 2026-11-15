#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int i,n,t;
    cin>>t;
    while(t--)
    {   
        
        i=0;
        cin>>n;
        if(n==1 || n==2 || n==3)
        {
            cout<<"-1"<<endl;
        }
        else{
        for(i=1;i<=n;i++)
        {
            if(i==1)
            {
                cout<<"4 ";
            }
            else if(i==4)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<i<<" ";
            }
            
        }
        cout<<endl;
        
        }
        
    }
}
