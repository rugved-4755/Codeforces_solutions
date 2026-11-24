#include<bits/stdc++.h>
using namespace std;


int find_near(vector<int>arr,int size,int index)
{
    int flag,i,temp;
    flag=0;
    temp=arr[index];
    for(i=index+1;i<size;i++)
    {
        if(arr[i]==temp ||arr[i]-temp==1)
        {
            flag=1;
            break;
        }
    }
    return flag;
}


int main()
{
    int i,t,n,temp,check;
    cin>>t;
    while(t--)
    {   vector<int>arr;
        cin>>n;
        check=1;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        for(i=0;i<n-1;i++)
        {
            check=find_near(arr,n,i);
            if(check==0)
            {
                break;
            }
            
        }
        if(check==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}


