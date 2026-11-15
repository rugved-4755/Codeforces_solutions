#include<bits/stdc++.h>
using namespace std;
int main()
{  int t,i,size,flag;
   string s;
   cin>>s;
   size=s.length();
   flag=0;
   for(i=0;i<size;i++)
   {
       if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
       {
           flag=1;
           break;
       }
   }
   if(flag==0)
   {
       cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
