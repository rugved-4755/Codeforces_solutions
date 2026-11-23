#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,n,s,e;
 int sereja,dima;
 int arr[1000];
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 sereja=0;
 dima=0;
 s=0;
 e=n-1;
 i=1;
 while(s<=e)
 {
    if(arr[s]<=arr[e])
    {
     if(i%2==1)    //sereja turn
     {
         sereja=sereja+arr[e];
         
     }
     else
     {
         dima=dima+arr[e];
     }
     e--;
    }
    else
    {
        if(i%2==1)
        {
            sereja=sereja+arr[s];
        }
        else
        {
            dima=dima+arr[s];
        }
        s++;
        
    }
    i++;
 }
 cout<<sereja<<" "<<dima;
 
}    

