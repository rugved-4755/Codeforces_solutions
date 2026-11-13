#include<iostream>
#include<string>
using namespace std;

int find_sum(string s)
{   int sum=0;
    for(int i=0;i<s.length();i++)
    {
        sum=sum+s[i]-'0';
    }
    return sum;
}


void replace(string &s)
{
    int sum=find_sum(s);
    s=to_string(sum);
}



int main()
{
    string s;
    cin>>s;
    int ans=0,sum=0;
    while(s.length()!=1)
    {
        replace(s);
        ans++;
    }
    cout<<ans;
}
