#include<iostream>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        while(n%2==0)
        {
            n= n/2;
            if(n==1)
            {
                cout<<"Number is power of 2"<<endl;
            }

        }

    }
    if(n!=1  || n==0)
     cout<<"Number is not power of 2"<<endl; 
    return 0;
}