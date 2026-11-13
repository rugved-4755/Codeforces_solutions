#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,min,max,mid,diff;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        max=(a>b)?((a>c)?a:c):((b>c)?b:c);
        min=(a<b)?((a<c)?a:c):((b<c)?b:c);
        mid=a>b?((b>c)?b:((c>a)?a:c)):((a>c)?a:((b>c)?c:b));
        if(mid-min==1 && max-mid==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}
