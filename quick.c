#include <stdio.h>
#include <stdlib.h>
void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);
int main()
{
   int a[] = {23,76,45,32,89,12,43,76,56,78,25,11,49,84,47};
   int n, p;
   n=sizeof(a)/sizeof(int);
   for (p = 0; p < n; p++)
   {
      printf("%d ", a[p]);
   }
   quicksort(a, 0, n-1);
   printf("\narray after sorting :\n ");
   for (p = 0; p < n; p++)
   {
      printf("%d ", a[p]);
   }
}
void quicksort(int a[], int low, int high)
{
   int partition_index;
   if (low < high)
   {
      partition_index = partition(a, low, high);
      quicksort(a, low, partition_index - 1);
      quicksort(a, partition_index + 1, high);
   }
}

int partition(int a[], int low, int high)
{
   int i, j, pivot, temp;
   pivot = a[low];
   i = low;
   j = high + 1;
   do
   {
      do
      {
         i++;
      } while (pivot > a[i]);
      do
      {
         j--;
      } while (pivot < a[j]);
      if (i < j)
      {

         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }

   } while (i < j);

   temp = a[j];
   a[j] = a[low];
   a[low] = temp;

   return j;
}