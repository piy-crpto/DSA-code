#include<iostream>
using namespace std;
 int pthpower(int n,int p)
 {
     if(p==0)
     {
         return 1;
     }
     return n*pthpower(n,p-1);
 }   
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<pthpower(n,p);
    return 0;
}