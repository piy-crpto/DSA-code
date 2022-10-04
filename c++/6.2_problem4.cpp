#include<iostream>
using namespace std;
int main(){
     char c;
     cout<<"Input an character: ";
     cin >> c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
    {
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }
    return 0;
}
    