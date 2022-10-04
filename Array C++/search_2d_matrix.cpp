#include<iostream>
using namespace std;
   //rows and column are sorted 
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
             }
       }
       bool found =false;
       int r=0,c=m-1;
       while(r<m && c>=0)
       {
            if(mat[r][c]==target)
            {
                found = true;
            }
            if(mat[r][c]>target)
            {
                c--;
            }
            else{
                r++;
            }
       }
       if(found)
       {
           cout<<"ElementFound";
        
       }
       else 
       {
           cout<<"Element does Not found";
       }
    return 0;
}