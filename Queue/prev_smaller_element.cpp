#include<iostream>
#include<stack>
using namespace std;
void previousSmallerElements(int a[],int N)
{     
    stack <int> s;
     for(int i=0;i<N;i++)
     {
        while(!s.empty() && s.top()>=a[i])
        {
           s.pop();
        }
        if(s.empty())
        {
            cout<<"-1  ";
        }
        else
        {
            cout<<s.top()<<"  ";
        }
        s.push(a[i]);
     }

}
int main()
{    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    previousSmallerElements(a,n);


    return 0;
}
