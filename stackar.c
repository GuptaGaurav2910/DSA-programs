#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stackfun.c"
extern int top;
extern int stack[50];
extern int max;

void push();
void pop();
void peep();
void display();
int main()
{
   int input;
   printf("enter the length of stack from 1 to 50: ");
   scanf("%d", &max);
   do
   {
      printf("1) push\n2) pop\n3) peep\n4) display\n5) exit\n");

      printf("\n Enter operation you want to do : ");
      scanf("%d", &input);
      switch (input)
      {
      case 1:
         push();
         break;
      case 2:
         pop();
         break;
      case 3:
         peep();
         break;
      case 4:
         display();
         break;
      case 5:
         printf("\n Thank you for using program:\n");
         break;
      default:
         printf("\n Entered input is not correct :\n");
         break;
      }
   } while (input != 5);
   return 0;
}
