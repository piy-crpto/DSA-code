//print the power set 
#include<iostream>
using namespace std;
 void powerSet(string s,int i,string curr)
 {
     if(i==s.length())
     {
         cout<<curr<<endl;
         return;
     }
     powerSet(s,i+1,curr+s[i]);
     powerSet(s,i+1,curr);
 }   
int main()
{
    powerSet("ABC",0,"");
    return 0;
}