// Two Pointer Technique
// Sorting the array :  O(NlogN)
// Iterating each element and applying two sum problem to the rest of the array : O(N*N)

//Final Time Coomplexity : O(N^2)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{  
   int n;
   cin>>n;
   
   int target;
   cin>>target;
   bool found = false;
   vector<int> a(n);
   for(auto &i : a)
   {
       cin>>i;
   }
   sort(a.begin(),a.end());
   for(int i=0;i<n;i++)
   {
       int lo = i+1,hi =n-1;
       while(lo<hi)
       {
           int current = a[i] + a[lo] + a[hi];
           if(current == target)
           {
               found  = true;
           }
            if(current<target)
           {
               lo++;
           }
           else
           {
               hi--;
           }
       }

   }

   if(found)
   {
       cout<<"True";
   }
   else
   {
        cout<<"False";
   }
    return 0;
}