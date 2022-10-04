#include<iostream>
using namespace std;
int main()
{
  //  int i=1;
  //  int j=2;
  //  int k;
    //1    //2//1    //2      //3//4
  //  k=i + j + i++ + j++ + ++i + ++j;
  //  cout<<i<<"  "<<j<<"  "<<"  "<<k<<endl;
  //  return 0;
  int i=0;
  //0    0      1      1
  i=i++ - --i + ++i - i--;
//0
 // cout<<i<<endl;

 // return 0;
