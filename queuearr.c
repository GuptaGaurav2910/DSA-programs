#include <stdio.h>
#include <stdlib.h>
int max;
int front = -1;
int rear = -1;
int queue[100];
void insertion()
{
    if (rear == max - 1)
    {
        printf("underflow :\n");
    }
    while (rear != max - 1)
    {
    int val;
    printf("enter the elelmnt to insert of queue : ");
    scanf("%d", &val);
         if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        queue[rear] = val;
    }
}
void deletion()
{
    if(rear == -1)
    {
        printf("underflow :\n");
    }
    else{
        front =front +1;
    }
}
void display()
{
     if(rear == -1)
    {
        printf("underflow :\n");
    }
    else{
    for (int i = front; i <= rear; i++)
    {
       printf("%d ",queue[i]);
    }
    }
    
}
void main()
{
    int input;
    printf("enter the max element in queue : ");
    scanf("%d", &max);
    do
    {
        printf(" \n enter no of that operation you want to do :\n 1) insert in  queue \n 2) delete from queue \n 3) dispaly \n 4) exit \n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        }
    } while (input != 4);
}