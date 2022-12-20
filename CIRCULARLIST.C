#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node * front = NULL;
Node * rear = NULL;
Node * insertion()
{
    int val;
    Node *new_node;
    printf("enter the data you want to input \n");
    scanf("%d",&val);
    new_node=(Node *)malloc(sizeof(Node));
    new_node->data=val;
    if(front==NULL)
    {
        front = rear = new_node;
    }
    else
    {
        rear = rear->next;
        rear = new_node;
        rear->next = front;
    }
}
// deletion always takes place from front in circular queue;
Node *deletion()
{
    Node *ptr=front;
    front = ptr->next;
    rear->next=front;
    free(ptr);

}
void display()
{
    Node *temp = front;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp->next != front);
}
int main()
{
    int input;
    do
    {
        printf(" \n enter no of that operation you want to do :\n 1) insert in  circular queue \n 2) delete from circular queue \n 3) dispaly \n 4) exit \n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            rear = insertion();
            break;
        case 2:
            front = deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        }
    } while (input != 4);
}