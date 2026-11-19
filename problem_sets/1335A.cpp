#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t,temp;
    cin>>t;
    while(t--)
    {
        cin>>temp;
        if(temp%2==0)
        cout<<temp/2-1<<endl;
        else
        cout<<temp/2<<endl;
    }
}
