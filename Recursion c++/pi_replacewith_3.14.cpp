// #include<iostream>
// using namespace std;
    
// int main()
// {
//     string str;
//     cin>>str;
//     string output;
//     for(int i=0;i<str.length();i++)
//     {
//        if(str[i]=='p' && str[i+1]=='i')
//        {
//            output+="3.14";
//            i++;
//        }
//        else
//        {
//            output+=str[i];
//         }
//     }
//      cout<<output<<endl;
    
//     return 0;
// }
#include<iostream>
using namespace std;
  void replacePi(string s)
  {
      if(s.length() == 0)
      {
          return;
      }
      if(s[0]=='p' && s[1] =='i')
      {
          cout<<"3.14";
          replacePi(s.substr(2));
      }
      else
      {
          cout<<s[0];
        replacePi(s.substr(1));
      }
  }  
int main()
{
   replacePi("pipippppppiiip");
    return 0;
}