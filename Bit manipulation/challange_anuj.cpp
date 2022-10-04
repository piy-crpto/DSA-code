#include<iostream>
using namespace std;
int numberofones(int n)
{
    int count =0;
    while(n!=0)
    {
        n = n &(n-1);
        count++;
    }
    return count;
}    
int main()
{
    int a,b;
    cin>>a>>b;
    int cnt1 = a^b;
    cout<<numberofones(cnt1)<<endl;

}