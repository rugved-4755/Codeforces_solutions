#include<bits/stdc++.h>
using namespace std;

int find_diff(char ch1, char ch2)
{
    
    int diff=max(ch1-ch2,ch2-ch1);
    int ans=min(26-diff,diff);
    return ans;
}

int main()
{ int n,i,ans,min,j;
int flag=1;
string s;
string compare="ACTG";
min=INT_MAX;
cin>>n>>s;
for(i=0;i<n-3;i++)
{ans=0;
    for(j=0;j<4;j++)
    { 
        ans=ans+find_diff(s[i+j],compare[j]);
    }
    if(ans<min)
    {
        min=ans;
    }
}
cout<<min;
}
