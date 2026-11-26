#include<bits/stdc++.h>
using namespace std;

int main()
{   int i,n,no_1,no_2,no_3,temp,mini;
    int s1[5000];
    int s2[5000];
    int s3[5000];
    no_1=0;
    no_2=0;
    no_3=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {   
        cin>>temp;
        if(temp==1)
        {
            s1[no_1++]=i;
        }
        else if(temp==2)
        {
            s2[no_2++]=i;
        }
        else
        {
            s3[no_3++]=i;
        }
    }
    
    mini=min(min(no_1,no_2),no_3);
    cout<<mini<<endl;
    for(i=0;i<mini;i++)
    {
        cout<<s1[i]<<" "<<s2[i]<<" "<<s3[i]<<endl;
    }
    
    
}

