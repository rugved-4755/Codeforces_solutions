#include<iostream>
using namespace std;
int main()
{
    int t,size;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        size=s.size();
        if(size<=10)
        cout<<s<<endl;
        else
        cout<<s[0]<<size-2<<s[size-1]<<endl;
    }
}
