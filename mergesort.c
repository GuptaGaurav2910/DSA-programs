#include<stdio.h>
#include<stdlib.h>
int mid;
void merge(int a[],int low,int mid,int high);
void mergesort(int a[],int low,int high);
int main()
{
   int a[10],n,p;
   int low,mid,high;
printf("enter the length of array\n");
scanf("%d",&n);
high=n-1;
low=0;
mid=(low+high)/2;
for(p=0;p<n;p++){
printf("enter the element %d\n",p+1);
scanf("%d",&a[p]);
}
mergesort(a,low,high);
printf("sorted elements : ");
for(p=0;p<n;p++)
{
   printf("%d ",a[p]);
}
}
void mergesort(int a[],int low,int high)
{
   if(low<high)
   {
      mid=(low+high)/2;
      mergesort(a,low,mid);
      mergesort(a,mid+1,high);
      merge(a,low,mid,high);
   }
}
void merge(int a[],int low,int mid,int high)
{
   int h,i,j,k;
   int b[10];
   h=low;
   i=low;
   j=mid+1;
   do
   {
      if(a[h]<=a[j])
      {
         b[i]=a[h];
         h=h+1;
      }
      else
      {
         b[i]=a[j];
         j=j+1;
      }
      i=i+1;
   }while((h<=mid)&&(j<=high));
   if(h>mid)
   {
      for(k=j;k<=high;k++)
   {
      b[i]=a[k];
      i=i+1;
   }
   }
   else
   {
      for(k=h;k<=mid;k++)
      {
         b[i]=a[k];
         i=i+1;
      }
   }
   for(k=low;k<=high;k++)
      {
         a[k]=b[k];
      }
}
