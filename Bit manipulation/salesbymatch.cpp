#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, int arr[])
 {
   int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
             for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=0;
                    break;
                    }
                }           
        }
    }
    return count;
 
}

int main()
{  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c= sockMerchant(n,arr);
    cout<<c<<endl;
  return 0;
}