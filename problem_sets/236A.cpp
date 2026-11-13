#include<iostream>
using namespace std;

bool is_distinct(string s,char ch,int a)
{
    bool ans=1;
    for(int j=0;j<a;j++)
    {
        if(s[j]==ch)
        return 0;
    }
    return ans;
    
}


int main()
{
    string s;
    int size,i,ans;
    cin>>s;
    size=s.size();
    ans=1;
    for(i=1;i<size;i++)
    {
        if(is_distinct(s,s[i],i))
        ans++;
    }
    if(ans%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
}
