#include<iostream>
using namespace std;
int getBit(int n,int pos)
{

    
        return (n&(1<<pos));
    
}
int main()
{
    cout<<getBit(5,0)<<endl;
    return 0;
}
