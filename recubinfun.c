   #include<stdio.h>
   #include<stdlib.h>
   int helloworld(int a[],int n,int item);
   int main()
{    int n,item,a[100],i;
      printf("enter the no of array from 1 to 100 : ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
         printf("enter the array %d  ",i+1);
         scanf("%d",&a[i]);
      }
      printf("enter the item to found");
      scanf("%d",&item);
       helloworld(a,n,item);
}
int helloworld(int a[],int n,int item)
{
      int flag=0;
   
      for(int i=0;i<n;i++)
      {
         if(a[i]==item)
         {
               printf("item found at %d",i+1);
            
         }
         
      }
      return 0;
}