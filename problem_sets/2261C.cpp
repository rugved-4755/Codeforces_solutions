#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n_odd,n,t,i,n_even,temp;
    int arr[1000000];
    cin>>t;
    while(t--)
    {   n_even=0;
    n_odd=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            arr[i]==temp;
            if(temp%2==0)
            {
                n_even++;
            }
        }
        n_odd=n-n_even;
        if(n_odd%2==0)
        {
            cout<<"Moggity"<<endl;
        }
        else  //n_odd%2==1
        {
            if(n_even>1)
            {
                cout<<"Moggity"<<endl;
            }
            else if(n_even==1)
            {
                if(n_odd==1)
                {
                    cout<<"Larpity"<<endl;
                }
                else  //n_odd>1
                {
                    cout<<"Moggity"<<endl;
                }
            }
            else //n_even==0
            {
                if(n_odd==3)
                {
                    cout<<"Larpity"<<endl;
                }
                else //n_odd>1
                {
                    cout<<"Moggity"<<endl;
                }
            }
        }
    }
}
