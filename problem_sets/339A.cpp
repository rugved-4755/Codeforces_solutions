#include<iostream>
using namespace std;


void sort(int arr[],int size)
{int i,j;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}




int main()
{
    int arr[50];
    string s;
    cin>>s;
    int size=s.size();
    int i,j=0;
    for(i=0;i<size;i=i+2)
       arr[j++]=s[i]-'0';
    
    //j is size of array   
    sort(arr,j);
    for(i=0;i<j-1;i++)
    {
        cout<<arr[i]<<"+";
    }
    cout<<arr[j-1];
    
}
