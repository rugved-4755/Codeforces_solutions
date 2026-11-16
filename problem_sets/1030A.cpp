#include<bits/stdc++.h>
using namespace std;

int main()
{  int n,i,temp,flag;
    flag=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>temp;
        if(temp==1)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"HARD";
    }
    
    else
    {
        cout<<"EASY";
    }

}
