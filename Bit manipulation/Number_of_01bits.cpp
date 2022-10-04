#include<iostream>
using namespace std;
void count1bits(int n)
{   int count0 =0,count1=0;
   while(n>0)
   { if(n&1==1)
    {    
        
        count1++;
        
    }

    
    else
    {
        count0++;
    }
    n =n>>1;
   }

    cout<<count1<<endl;
    cout<<count0<<endl;
}
    
int main()
{
    int n;
    cin>>n;
  count1bits(n);

    return 0;
}