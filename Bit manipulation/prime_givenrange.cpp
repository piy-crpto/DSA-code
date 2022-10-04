// #include<iostream>
// using namespace std;
//  void check_prime(int n)
//  {
//     int j=0;
     
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//            j++;  
//         }
       
//     }
//     if(j==2)
//     {
//         cout<<"Prime"<<endl;
            
//     }
//     else
//     {
//         cout<<"Non-Prime"<<endl;
             
//     }
//  }   
// int main()
// {
//     int n;
//     cin>>n;
//     check_prime(n);
//     return 0;
// }

#include<iostream>
using namespace std;
 bool check_prime(int n)
 {
    int j=0;
     
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           j++;  
        }
       
    }
    if(j==2)
    {
        return true;
            
    }
    else
    {
        return false;
             
    }
 }  
 void print_primenumbers(int n)
 {
     for(int i=1;i<=n;i++)
     {
         if(check_prime(i)==true)
         {
           cout<<i<<" ";
         }
     }
 } 
int main()
{
    int n;
    cin>>n;
    print_primenumbers(n);
    return 0;
}