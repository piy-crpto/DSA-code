//find a unique number
#include<iostream>
using namespace std;
  int unique(int arr[],int n)
  {
      int xorsum=0;
      for(int i=0;i<n;i++)
      {
          xorsum = xorsum^arr[i];
      }
      return xorsum;
  }  
int main()
{
    int arr[7] = {1,2,3,4,3,2,1};
   cout<<unique(arr,7);
    return 0;
}