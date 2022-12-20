#include<stdio.h>
int search(int arr[],int n,int item);
int main()
{
    int i, n,arr[50], item, flag=0;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    printf("enter the item to find: \n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
        {
            printf("enter element %d of array: \n",i+1);
            scanf("%d",&arr[i]);
        }
    search(arr, n, item);
    return 0;
}
int search(int arr[],int n,int item)
{
    for(int i=0;i<n;i++)
        {
            if(item==arr[i])
            printf("found %d at position %d",item,i+1);
        }
}