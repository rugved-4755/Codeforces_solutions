#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,temp;
    int x[1000],y[1000];
    int i=0;
    cin>>s>>n;
    temp=n;
    while(temp--)
    {
        cin>>x[i];
        cin>>y[i];
        i++;
    }
    //sort in ascending dragon power
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
            }
        }
    }
    int flag=1;
    for(i=0;i<n;i++)
    {
        if(x[i]<s)
        {
            s=s+y[i];
        }
        else
        {
            flag=0;
            break;   
        }
    }
    if(flag==0)
    cout<<"NO";
    else if(flag==1)
    cout<<"YES";
}
