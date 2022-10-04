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
#include<iostream>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        res^=arr[i];
    }
    cout<<res<<endl;
    
    return 0;
}