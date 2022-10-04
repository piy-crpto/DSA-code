//method 1 using two for loops and time complexity is O(n^2);
// #include<iostream>
// using namespace std;
    
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//        cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//            if(arr[i]==arr[j] && i!=j)
//            {
//                break;
//            }
//            if(j==n-1)

//            {
//                cout<<arr[i]<<endl;
//            }
//         }
//     }

//     return 0;
// }

//method 2 using xor
#include<iostream>
using namespace std;

 int findSingle(int arr[],int arrSize)
 {
     int res = arr[0];
     for(int i=1;i<arrSize;i++)
     {
         res = res^arr[i];
     }
     return res;
 }   
int main()
{
    int arr[] = {2,3,5,4,5,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Element occuring once is  "<<findSingle(arr,n);
    return 0;
}


//time complexity : O(n)