#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t, i, k, ans, n;
   
   cin >> t;
   while(t--)
   {   
       vector<int> arr1;
       vector<int> arr2;    // unique elements 
       vector<int> arr3;    // remaining duplicates in order
       
       cin >> n;
       ans = 0;
       k = 0;
       
       arr1.resize(n);
       for(i = 0; i < n; i++)
       {
           cin >> arr1[i];
       }
       
       sort(arr1.begin(), arr1.end());
       
       
       for(i = 0; i < n; i++)
       {
           if(i == 0 || arr1[i] != arr1[i-1])
           {
               arr2.push_back(arr1[i]);
           }
           else
           {
               arr3.push_back(arr1[i]);
           }
       }
       
       int sz3 = arr3.size();
       k = 0;
       for(i = 0; i < sz3 - 1; i++)
       {
           if(arr3[i] == arr3[i+1])
           {
              k++;     
           }
       }
       
       
       if (sz3 > 0)
           ans = arr2.size() + (sz3 - k);
       else
           ans = arr2.size();
           
       cout << ans << "\n";
       
       // Print arr2
       for(i = 0; i < arr2.size(); i++)
       {
           cout << arr2[i] << " ";
       }
       
       // Print arr3 in reverse direction
       for(i = 0; i < sz3; i++)
       {
           cout << arr3[sz3 - i - 1] << " ";
       }
       
       cout << "\n";
   }
  
}
