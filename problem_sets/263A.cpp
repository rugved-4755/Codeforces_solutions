#include<iostream>
using namespace std;
int main()
{
    int ans,i,temp,col,row;
    for(i=0;i<25;i++)
    {
        cin>>temp;
        if(temp==1)
        break;
        
    }
    row=(i/5)+1;
    col=(i%5)+1;
    ans=max((row-3),(3-row))+max((col-3),(3-col));
    cout<<ans;
}
