#include<bits/stdc++.h>
using namespace std;

int find_rest(int i)
{
    int arr[]={1,2,4,5,7,8,10,11,14,16,17,19,20,22,25,26,28,29};
    return arr[i-1];
}


int main()
{  int t,ans,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        if(k%18==0)
        {
            ans=30*(k/18)-1;
        }
        else
        {
            ans=30*(k/18)+find_rest(k%18);
        }
        cout<<ans<<endl;
        
    }
} 

