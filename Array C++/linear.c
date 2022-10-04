#include<stdio.h>
int linearsearch(int n, int arr[], int key)
  {
      for(int i=0;i<n;i++)
      {
          if(arr[i]==key)
          {
              return i;
          }
      }
      return -1;
  }



int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   int key;
   scanf("%d",&key);
   int c = linearsearch(n,arr,key);
  printf("%d",c);
   return 0;
}