// repeat one more time

// #include<iostream>
// using namespace std;
//   void primefactor(int n)
//   {
//       int spf[n+1] = {0};
//       for(int i=2;i<=n;i++)
//       {
//           spf[i]=i;
//       }
//       for(int i=2;i<=n;i++)
//       {
//         if(spf[i]==i)
//         {
//           for(int j=i*i;j<=n;j+=i)
//           {
//               if(spf[j]==j)
//               {
//                   spf[j]=i;
//               }
//           }  
//         }


//       }
//       while(n!=1)
//       {
//           cout<<spf[n]<<" ";
//           n = n/spf[n];
//       }
//   }  
// int main()
// {
//     int n;
//     cin>>n;
//     primefactor(n);
//     return 0;
// }
//time complexity o(logn)




#include<bits/stdc++.h>
using namespace std;
  void primefactor(int n)
  {
      while(n%2==0)
      {
          cout<<2<<" ";
          n = n/2;
      }
      for(int i=3;i<=sqrt(n);i=i+2)
      {
          while(n%i==0)
          {
              cout<<i<<" ";
              n=n/i;
          }
      }
      
  }  
  
  
int main()
{
    int n;
    cin>>n;
    primefactor(n);
    return 0;
} 