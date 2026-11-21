#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,temp;
    cin>>t;
    int arr[100];
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                if(i==n-2)
                {
                    if(arr[0]==arr[i])
                    {cout<<i+2<<endl;
                    break;
                        
                    }
                    else
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
                else
                {
                    if(arr[i+2]==arr[i])
                    {cout<<(i+1)+1<<endl;
                        break;
                    }
                    else
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
        
    }
  
}
