// Time Complexity : O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a[6] = {2,1,5,6};

    int ans = 0;
   for(int i=0;i<4;i++)
   {
       int minh = a[i];
       for(int j=i;j<4;j++)
       {
                   minh = min(a[j],minh);
                   int len = j-i+1;
                    ans = max(ans,len*minh);
       }
   }
   cout<<ans;
    return 0;
}



  

