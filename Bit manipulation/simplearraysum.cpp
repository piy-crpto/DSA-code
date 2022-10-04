#include<iostream>
using namespace std;
int simpleArraysum(int n)
{  
    int arr[n];
    int sum =0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];

    }
    return sum;

}
    
int main()
{
    int n;
    cin>>n;
    int result = simpleArraysum(n);
    cout<<result;
    
    return 0;
}