#include<bits/stdc++.h>
using namespace std;


bool check(string s, char ch)
{   int i;
    
   if(ch<'c' || ch>'s')
    {
        return 0;
    }
    
    else
    {
        for(i=0;s[i]<ch;i++)
        {
        
        }
        if(s[i]==ch)
        return 1;
        else
        return 0;
    }
    
}



int main()
{
   string s="cdefors"; //cdefors
   char ch;
   int t;
   bool ans;
   cin>>t;
   while(t--)
   {
       cin>>ch;
       ans=check(s,ch);
       if(ans==1)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
}
