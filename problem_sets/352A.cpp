#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp,n_zero,n_five,flag;
    cin>>n;
    int arr[1000];
    n_zero=0;
    n_five=0;
    flag=0;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==5)
        n_five++;
        else
        n_zero++;
    }
    
    if(n_zero<1)
    {
        cout<<"-1"<<endl;
    }
    else    //n_zero>=1
    {  
        if(n_five<=8)
        cout<<"0";
        else
      { while(n_five!=0)
       { 
          if(n_five%9==0 && flag==0)
         {
            for(i=1;i<=n_five;i++)
            {
                cout<<"5";
            }
            for(i=1;i<=n_zero;i++)
            {
                cout<<"0";
            }
            flag=1;
         }
         if(flag==1)
         break;
         n_five--;
       }
      }    
    }
    
}
