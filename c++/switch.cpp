#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input a character: ";
    cin>>button;

switch (button)
{
case 'a':
    cout<<"Hello"<<endl;
    break;
    case 'b':
    cout<<"Nameste"<<endl;
    break;
    case 'c':
    cout<<"Salute"<<endl;
    break;
    case 'd':
    cout<<"Ciao"<<endl;
    break;
   case 'e':
    cout<<"Hola"<<endl;
    break;
    case 'f':
    cout<<"Cool"<<endl;
    break; 
    


default:
cout<<"I am still learning more!"<<endl;
    break;
}
return 0;
}