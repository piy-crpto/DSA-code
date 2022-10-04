#include<iostream>
using namespace std;
void reversebit(int n)
{  
  int  rev=0;
    while(n>0)
    {
        rev<<=1;
        if((n&1)==1)
        {
            rev^=1;
        }
        n>>=1;
    }
    cout<<rev<<endl;
}
    
int main()
{
    int n;
    cin>>n;
  reversebit(n);

    return 0;
}