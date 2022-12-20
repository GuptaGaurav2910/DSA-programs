#include <stdio.h>
#include <stdlib.h>
void insertionsort(int[], int);
int main()
{
   int a[10], n, i;
   printf("enter the no of element in array : \n");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      printf("enter the %d element of array : \n", i + 1);
      scanf("%d", &a[i]);
   }
   printf("array before sorting :\n");
   for (i = 0; i < n; i++)
   {
      printf("%d  ", a[i]);
   }

   insertionsort(a, n);
   printf("array after sorting :\n");
   for (i = 0; i < n; i++)
   {
      printf("%d  ", a[i]);
   }
   return 0;
}

void insertionsort(int a[], int n)
{  int j;
  int temp;
   for (int k = 1; k <= n - 1; k++)
   {
      temp = a[k];
      j = k - 1;
      while (j >= 0 && a[j] > temp)
      {
         a[j+1]=a[j];
         j--;
      }
      a[j+1]=temp;
   }
}