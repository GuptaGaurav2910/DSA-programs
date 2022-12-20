#include<stdio.h>
int search(int arr[], int low, int high,int item);
int main(){
    int n, low=0,item;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    int high=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter item to find :\n");
    scanf("%d", &item);
    int result=search(arr,low, high,item);
    printf("%d found at index %d",item, result);
    return 0;
}
int search(int arr[], int low, int high,int item){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(item==arr[mid])
        return mid;
        else if(item<arr[mid])
        return search(arr,low,mid-1,item);
        else
        return search(arr,mid+1,high,item);

    }
    return -1;
}