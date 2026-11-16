#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,hello;
    hello="hello";
    int i,x,k;
    int temp;
    cin>>s;
    x=s.length();
    k=0;
    for(i=0;i<x;i++)
    {   
        temp=hello[k];
        
        if(temp==int(s[i]))
        {   
            k++;
            if(k==5)
            break;
        }
    }
    
    if(k==5)
    cout<<"YES";
    else
    cout<<"NO";
}
