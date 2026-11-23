#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum_first,sum_last,t;
    string s;
    cin>>t;
    while(t--)
    {   cin>>s; 
        sum_first=0;
        sum_last=0;
        for(i=0;i<6;i++)
        {   
            if(i<3)
            {
                sum_first=sum_first+s[i]-'0';
            }
            else
            {
                sum_last=sum_last+s[i]-'0';
            }
        }
        if(sum_first==sum_last)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }    
}

