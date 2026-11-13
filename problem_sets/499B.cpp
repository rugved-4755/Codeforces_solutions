#include<iostream>
using namespace std;
int main()
{
    string lan1[3000];
    string lan2[3000];
    string s1,s2,temp;
    int n,m,i;
    cin>>n>>m;
    for( i=1;i<=m;i++)
    {
        cin>>lan1[i-1];
        cin>>lan2[i-1];
    }
    while(n!=1)
    {   i=0;
        cin>>temp;
        while(lan1[i]!=temp)
        i++;
        
        if(lan1[i].length()>lan2[i].length())
        {
            cout<<lan2[i]<<" ";
        }
        else
        {
            cout<<lan1[i]<<" ";
        }
        n--;
    }
    i=0;
        cin>>temp;
        while(lan1[i]!=temp)
        i++;
        
        if(lan1[i].length()>lan2[i].length())
        {
            cout<<lan2[i];
        }
        else
        {
            cout<<lan1[i];
        }
}
