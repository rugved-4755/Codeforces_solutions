#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ans;
    int i,size;
    cin>>s;
    size=s.length();
    for(i=0;i<size-3;i++)
    {   
        
          
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {   
            i=i+2;
            if(ans.length()!=0)
            {   if(ans.back()!=' ')
                ans.push_back(' ');
                
            }
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    if(!(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'))
    {  if(i==size-3)
       { ans.push_back(s[i]);
        ans.push_back(s[i+1]);
        ans.push_back(s[i+2]);
       }
        else if(i==size-2)
        {
            ans.push_back(s[i]);
        ans.push_back(s[i+1]);
        }
        else if(i==size-1)
        {
             ans.push_back(s[i]);
        }
    }
   
  cout<<ans;
}
