#include<iostream>
using namespace std;

bool is_vowel(char ch)
{
    bool ans=false;
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='I' || ch=='i' || ch=='o' || ch=='O' || ch=='u' || ch=='U' || ch=='y' || ch=='Y' )
    ans=true;
    
    return ans;
}





int main()
{
    string s,ans;
    char ch;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(is_vowel(s[i]))
        {
            continue;
        }
        else
        {
            ans.push_back('.');
            if(s[i]<='Z')
            {
               ch=s[i]-'A'+'a';
               ans.push_back(ch);
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
    }
    cout<<ans;
    
}
