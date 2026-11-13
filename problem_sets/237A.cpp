#include<iostream>
using namespace std;

int main()
{   int ans=1;
    int temp;
    int n;
    int hr[100000];
    int min[100000];
    int store_hr,store_min;
    cin>>n;
    int i=0;
    temp=n;
    while(temp--)
    {
        cin>>hr[i]>>min[i];
        i++;
    }
    for(int i=0;i<n-1;i++)
    {int j=1;   
     temp=1;
     store_hr=hr[i];
     store_min=min[i];
     while(i+j<n && hr[i]==hr[i+j] && min[i]==min[i+j])
      {j++;
      temp++;
      }
      i=i+j-1;
      if(temp>ans)
      {
          ans=temp;
      }
    }
    cout<<ans;
    
}
