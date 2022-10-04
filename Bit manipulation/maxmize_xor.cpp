#include <bits/stdc++.h>

using namespace std;



int maximizingXor(int l, int r) {
    
    int max=0;
    int current;
    for(int i=l;i<=r;i++)
    {
       for(int j=l;j<=r;j++)
       {
           current = current^i^j;
           if(max<current)
           {
               current=max;
           }
    
           
       } 
    }
    return max;
}

int main()
{
    int l,r;
    cin>>l>>r;
   int maxnumber =  maximizingXor(l, r);
   cout<<maxnumber<<endl;
    return 0;
}
