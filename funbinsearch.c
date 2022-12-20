#include<stdio.h>
int search(int arr[], int n, int item);
int main(){
    int n,item;
    printf("enter size of array: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter element to find:\n");
    scanf("%d",&item);
    int result=search(arr,n,item);
    printf("%d found at index %d",item,result);
    return 0;
}
int search(int arr[], int n, int item){
    int low=0,mid,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(item==arr[mid])
        return mid;
        else if(item<arr[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}