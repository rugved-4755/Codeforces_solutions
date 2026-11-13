#include<iostream>
using namespace std;
int main()
{int t,n;
char c;
string str;
cin>>t;
while(t--)
{int ans=0;
cin>>n;
cin>>c;
cin>>str;
int s=0;
int e=n-1;
while(s<e)
{
if(str[s]==str[e])
{
s++;
e--;
}
else if((str[s]==c && str[e]!=c)|| str[s]!=c && str[e]==c)
{
ans++;
s++;
e--;
}
else
{ans=ans+2;
s++;
e--;
}
}
cout<<ans<<endl;
}

}
