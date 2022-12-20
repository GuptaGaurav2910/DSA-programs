#include<stdio.h>
int main(){
        int n,item;
        int arr[50]={0};
        printf("Enter size of array: \n");
        scanf("%d",&n);
        printf("enter the item to find: \n");
        scanf("%d",&item);

        for(int i=0;i<n;i++){
            printf("Enter Array element %d: \n",i+1);
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]==item)
            printf("found %d at position %d",item, i+1);
        }

        return 0;
}


