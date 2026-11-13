#include<iostream>
using namespace std;
int main()
{
    int x,n,t;
    string s;
    cin>>t;
    n=0;
    int temp=t;
    while(temp--)
    {   
        cin>>s;
        if(s[1]=='+')
        n++;
    }
    cout<<2*n-t;
}
