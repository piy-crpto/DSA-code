// #include<bits/stdc++.h>
// using namespace std;
    
// int main()
// {
//     string str;
//     cin>>str;
//  int n=  str.length();
//  for(int i=n-1;i>=0;i--)
//     {
//      cout<<str[i];
//     }
//       return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    if(str
    
    .length()==0)
    {
        return ;

    }
    string ros = str.substr(1);
    reverse(ros);
    cout<<str[0];
}
int main()
{   string str;
cin>>str;
reverse(str);
    return 0;
}