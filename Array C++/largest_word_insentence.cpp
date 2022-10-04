#include <iostream>
using namespace std;
//largest word  in the sentences
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int currLen = 0;
    int maxLen = 0;
  int st = 0, maxst = 0;
    while (i < n)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
            
        {
            if (currLen > maxLen)
            {
                
                maxLen = currLen;
                maxst = st;
            }
         //   st = i + 1;
            currLen = 0;
        }
        else
            currLen++;
        

        if (arr[i] == '\0')
            break;
        i++;
    }
    //cout<<arr<<endl;
    cout << maxLen<<endl;
   // for(int i=0;i<maxLen;i++)
  //  {
  //      cout<<arr[i+maxst]<<endl;
  //  }
    return 0;
}