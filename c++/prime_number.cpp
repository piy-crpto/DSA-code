#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"prime"<<endl;
    }
    return 0;

}

