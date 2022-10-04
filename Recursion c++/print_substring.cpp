// 
// #include<bits/stdc++.h>
// using namespace std;
 
// /*
//  * Function to print all (n * (n + 1)) / 2
//  * substrings of a given string s of length n.
//  */
// void printAllSubstrings(string s, int n)
// {
//     /*
//      * Fix start index in outer loop.
//      * Reveal new character in inner loop till end of string.
//      * Print till-now-formed string.
//      */
//     for (int i = 0; i < n; i++)
//     {
//         char temp[n - i + 1];
//         int tempindex = 0;
//         for (int j = i; j < n; j++)
//         {
//             temp[tempindex++] = s[j];
//             temp[tempindex] = '\0';
//             printf("%s\n", temp);
//         }
//     }
// }
 
// // Driver program to test above function
// int main()
// {
//     string s = "Geeky";
//     printAllSubstrings(s, s.length());
//     return 0;



#include<iostream>
using namespace std;
 void subseq(string s,string ans)   
 {
     if(s.length() == 0)
     {
                  cout<<ans<<endl;
                  return;
     }
     char ch = s[0];
     string ros = s.substr(1);

     subseq(ros,ans);
     subseq(ros,ans+ch);

 }
int main()
{
    
    subseq("ABC","");
    return 0;
}