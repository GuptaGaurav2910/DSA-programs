#include<stdio.h>
#include<stdlib.h>
int i,j,min_index;
void bubblesort(int a[],int n);
int main()
{
   int n,a[10];
   printf("enter the lenght of array \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("enter the array element %d ",i+1);
      scanf("%d",&a[i]);
   }
   bubblesort( a , n );

   return 0;
}

void bubblesort(int a[],int n)
{
   for(i=0;i<n;i++)
   {
      for(j=0;j<n-i;j++)
      {
         if(a[j]>a[j+1])
         {
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }
    printf("array after  sorting \n");
   for(i=0;i<n;i++)
   {
      printf(" %d ",a[i]);
     
   }
}