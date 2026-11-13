#include<bits/stdc++.h>
using namespace std;

int main()
{
    string f_n,l_n;
    cin>>f_n>>l_n;
    int i;
    string ans;
    ans.push_back(f_n[0]);
    char ch=l_n[0];
    for(i=1;i<f_n.length();i++)
    {
        if(f_n[i]<ch)
        ans.push_back(f_n[i]);
        else
        break;
    }
    ans.push_back(l_n[0]);
    cout<<ans;
}
