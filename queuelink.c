#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *rear = NULL;
Node *front = NULL;
Node *insertion()
{
    Node *new_node;
    int  val;
    int i=1;
    while (1)
    {
        printf("insert the value of node %d:\n", i);
        printf("insert -1 to exit");
        scanf("%d", &val);
        if (val == -1)
        {
            break;
        }
        new_node = (Node *)malloc(sizeof(Node));
        new_node->data = val;
        if (front== NULL)
        {
            new_node->next = NULL;
            front = new_node;
            rear = new_node;
            goto label;
        }
        rear->next = new_node;
        rear = new_node;
        rear->next = NULL;
    label:
    i++;
    }
    return rear;
}
Node *deletion()
{
    Node *temp;
    temp = front;
    printf("deleted node is : %d  ", temp->data);
    front = front->next;
    free(temp);
    return front;
}
void display()
{
    Node *ptr;
    ptr = front;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void main()
{
    int input;
    do
    {
        printf(" \n enter no of that operation you want to do :\n 1) insert in  queue \n 2) delete from queue \n 3) dispaly \n 4) exit \n");
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