#include<iostream>

using namespace std;
    
int main()
{
    int n,m;

    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
             {
                 cin>>mat[i][j];
             }sssss
       }
       bool found =false;
       for(int  i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(mat[i][j]==target) 
               {
                  found = true ;
               }     
           }
       }
       if(found)
       {
           cout<<"Found";
        
       }
       else 
       {
           cout<<"Not found";
       }
    return 0;
}