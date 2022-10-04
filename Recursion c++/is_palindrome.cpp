#include<iostream>
using namespace std;
 bool isPalin(string s,int l,int r)
 { 
     if(l>=r)
     {
         return true;
     }
     if(s[l]!=s[r])
     {
         return false;
     }
     return isPalin(s,l+1,r-1);
 }   
int main()
{
  bool ans =  isPalin("racecar",0,6);
  cout<<ans<<endl;
    return 0;
}


// time complexity O(n);