#include<iostream>
#include<vector>
using namespace std;

void take_ip(vector<int>&arr,int n)
{   arr.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

long long find_area(int a,int b,int mul)
{
    long long ans=1LL*(b-a)*mul;
    return ans;
}


int main()
{
    int t,w,h,n;
    long long temp,max;
    cin>>t;
    while(t--)
    {   max=-1;
        cin>>w>>h;
        vector<int>hor1;
        vector<int>hor2;
        vector<int>ver1;
        vector<int>ver2;
        //taking hor1 points;
        cin>>n;
        take_ip(hor1,n);
        //taking hor2 points;
        cin>>n;
        take_ip(hor2,n);
        //taking ver1 points;
        cin>>n;
        take_ip(ver1,n);
        //taking ver2 points;
        cin>>n;
        take_ip(ver2,n);
        //points on hor1
        temp=find_area(hor1[0],hor1.back(),h);
        if(temp>max)
        max=temp;
        //points of hor2
        temp=find_area(hor2[0],hor2.back(),h);
        if(temp>max)
        max=temp;
        //ponits on ver1
        temp=find_area(ver1[0],ver1.back(),w);
        if(temp>max)
        max=temp;
        //points on ver2
        temp=find_area(ver2[0],ver2.back(),w);
        if(temp>max)
        max=temp;
        cout<<max<<endl;
    }
    
}
