#include<bits/stdc++.h>
using namespace std;

int find_ways(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return 2;
}



int main()
{   int i,n,t,j,ans,temp,flag;
    int arr[100];
    char ch;
    cin>>t;
    while(t--)
    {   cin>>n;
        flag=0;
        j=0;
        arr[j++]=0;
        for(i=1;i<=n;i++)
        {
            cin>>ch;
            if(ch=='#')
            {
                arr[j++]=i;    
            }
        }
        arr[j++]=n+1;
        ans=0;
        if(j==n+2)
        cout<<ans<<endl;
        else if(j==2)
        {
            ans=find_ways(arr[1]-arr[0]-1);
            cout<<ans<<endl;
        }
        else
        {   
            for(i=0;i<j-1;i++)
            {   temp=arr[i+1]-arr[i]-1;
                if(temp>=3)
                {
                    flag=1;
                    ans=2;
                    break;
                }
                ans=ans+find_ways(temp);
            }
            
            if(flag==1)
            {
                 cout<<ans<<endl;
            }
            else
            {
            cout<<ans<<endl;
            }
            
        }
    }
} 

