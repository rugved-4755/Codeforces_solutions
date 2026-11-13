#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int size=a.size();
    int a_char,b_char,ans; //alphabetical number of characters
    ans=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>='a')
        a_char=a[i]-'a'+1;
        else
        a_char=a[i]-'A'+1;
        
        if(b[i]>='a')
        b_char=b[i]-'a'+1;
        else
        b_char=b[i]-'A'+1;
        
        if(a_char<b_char)
        {
            ans=-1;
            break;
        }
        else if(a_char>b_char)
        {
            ans=1;
            break;
        }
    }
    cout<<ans;
}
