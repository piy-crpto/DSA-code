#include<iostream>
using namespace std;
void trailingzero(int n)
{   int count0 =0;;
   while((n&1)==0)
   {
       count0++;
       n = n>>1;
   }
   cout<<count0<<endl;
}
    
int main()
{
    int n;
    cin>>n;
  trailingzero(n);

    return 0;
}