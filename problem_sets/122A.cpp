#include<bits/stdc++.h>
using namespace std;
int main()
{   int flag;
    int i;
    int s;
    cin>>s;
    int check[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    
    
   
        for(i=0;i<14;i++)
        {   flag=0;
            if(s%check[i]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    
   
}
