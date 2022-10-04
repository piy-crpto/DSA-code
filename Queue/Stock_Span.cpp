#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int n;
   
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int prices[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    int ans[n];
    for(int i=0;i<n;i++)
    {
       int days =0;
       for(int j=i;j>=0;j--)
       {
           if(prices[i]>=prices[j])
           {
               days++;
           }
           else
           {
               break;
           }
       }
       ans[i] = days;

    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}