#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    int sum =0;
    int originaln=n;
    
    while(n>0)
    {
        int cubeterm = n%10;
        sum += pow(cubeterm,3);
        n=n/10;
    }
    if(sum==originaln)
    {
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}