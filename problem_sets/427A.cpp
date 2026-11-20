#include<bits/stdc++.h>
using namespace std;
int main()
{
    int current_force=0;
    int unsolved=0;
    int i,n,temp;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>temp;
        if(temp==-1)
        {
         if(current_force==0)
         {
             unsolved++;
         }
         else
         {
             if(current_force>0)
             {
                 current_force--;
             }
         }
        }
        else
        {
            current_force+=temp;
        }
        
    }
    cout<<unsolved;
    
    
}
