#include<stdio.h>
int main(){
    int n,low,mid,high,item;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the number to find:\n");
    scanf("%d",&item);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==item){
            printf("%d found at position %d",item,mid+1);
            break;
        }
        else if(item<arr[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    return 0;
}