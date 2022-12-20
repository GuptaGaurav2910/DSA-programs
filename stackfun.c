#include<stdio.h>
int stack[50];
int top = -1;
int max;
void push()
{
   if (top == max - 1)
   {
      printf("overflow :\n ");
   }
   else
   {
      for (int j = top + 1; j < max; j++)
      {
         scanf("%d", &stack[j]);
         top = j;
      }
      printf("index of top is : %d \n", top);
   }
}
void peep()
{
   if (top == -1)
   {
      printf("underflow : \n");
   }
   else
   {
      printf("value at top is : %d \n ", stack[top]);
   }
}
void pop()
{
   if (top == -1)
   {
      printf("underflow :\n");
   }
   else
   {
      printf("popped value is : %d \n ", stack[top]);
      top = top - 1;
   }
}
void display()
{  if(top==-1)
{
   printf("\n stack is empty :\n");
   printf("\nTop index value is %d",top);
}
   for (int i = 0; i <= top; i++)
   {
      printf("array index %d value is: %d \n ", i+1, stack[i]);
   }
   printf("\n \n ");
}