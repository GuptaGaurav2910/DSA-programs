#include <stdio.h>
#include <stdlib.h>
int i, j;
int min_index;
void selectionsort(int a[], int n);
int main()
{
   int n, a[10];
   printf("enter the lenght of array \n");
   scanf("%d", &n);
   printf("array before sorting \n");
   for (i = 0; i < n; i++)
   {
      printf("enter the array element %d ", i + 1);
      scanf("%d", &a[i]);
   }
   selectionsort(a, n);
   printf("array after  sorting \n");
   for (i = 0; i < n; i++)
   {
      printf(" %d ", a[i]);
   }
   return 0;
}

void smallest(int a[], int i, int n, int min_index)
{
   int small;
   small = a[i];
   for (j = i + 1; j < n; j++)
   {
      if (small > a[j])
      {
         small = a[j];
         min_index = j;
      }
   }
}
void selectionsort(int a[], int n)
{
   int temp;
   for (i = 0; i <= n - 1; i++)
   {

      smallest(a, i, n, min_index);
      temp = a[i];
      a[i] = a[min_index];
      a[min_index] = temp;
   }
}