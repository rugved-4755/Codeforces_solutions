#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k,temp,j;
    cin>>n>>k;
    j=0;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp+k<=5)
        {
            j++;
        }
    }
    cout<<j/3;
}

