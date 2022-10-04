#include<iostream>
#include<stack>
using namespace std;
void previousSmallerElements(int a[],int N)
{     
    stack <int> s;
    int ans[N];
    //stack <int> s;
     for(int i=N-1;i>=0;i--)
     {
        while(!s.empty() && s.top()>=a[i])
        {
           s.pop();
        }
        if(s.empty())
        {
           ans[i] = -1;
        }
        else
        {
         ans[i] =    s.top();
        }
        s.push(a[i]);
     }
     for(int i=0;i<N;i++)
     {
         cout<<ans[i]<<" ";
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
