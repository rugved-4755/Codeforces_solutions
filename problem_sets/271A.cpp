#include<bits/stdc++.h>
using namespace std;

int find(int i)
{   int temp,k=3,digit;
    int digits[4];
    temp=i;
    while(temp!=0)
    {
        digit=temp%10;
        temp=temp/10;
        digits[k--]=digit;
        
    }
    
    for(int j=0;j<3;j++)
    {   temp=digits[j];
        for(k=j+1;k<4;k++)
        {
            if(digits[k]==temp)
            return -1;
        }
    }
    return i;
}





int main()
{   int i,n,ans,flag;
    cin>>n;
    ans=-1;
    flag=0;
    for(i=n+1;i<9999;i++)
    {
        ans=find(i);
        if(ans!=-1)
        {
           break;
        }
    }
    cout<<ans;
    
    

}
