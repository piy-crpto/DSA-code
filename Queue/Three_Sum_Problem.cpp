//time complexity : O(N^3)

#include<iostream>

using namespace std;
int main()
{  
    int n;
    bool found = false;
    cout<<"Enter the size of array : ";
    cin>>n;
   
    int a[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
     cout<<"Enter the Target : ";
     cin>>target;
    
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             for(int k=j+1;k<n;k++)
             {
                 if(a[i]+a[j]+a[k]==target)
                 {
                     found = true;
                 }
             }
         }
     }
     cout<<found;
    return 0;
}