#include<iostream>
using namespace std;
int main(){

    

    char c;
     cout<<"Input an character: ";
    cin >> c;
    
    switch (c)
    {
    case 'a':
     cout<<"It Is a vowel"<<endl;
        break;
        case 'e':
     cout<<"It Is a vowel"<<endl;
        break;
         case 'i':
     cout<<"It Is a vowel"<<endl;
        break; 
         case 'o':
     cout<<"It Is a vowel"<<endl;
        break;
        case 'u':
     cout<<"It Is a vowel"<<endl;
        break;
    
    default:
        cout<<"It is a consonant"<<endl;
        break;
    }
    return 0;
}