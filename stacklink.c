#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *top = NULL;
Node *insertion()
{
    Node *new_node;
    int i = 1, val;
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
        if (top ==NULL)
        {
            new_node->next = NULL;
            top = new_node;
            goto label;
        }
        new_node->next = top;
        top = new_node;
    label:
        i++;
    }
    return top;
}
Node *deletion()
{
    Node *temp;
    temp = top;
    top = top->next;
    printf("deleted node of stack id %d ", temp->data);
    free(temp);
    return top;
}
void display()
{
    Node *ptr;
    ptr = top;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
}
void main()
{
    int input;
    do
    {
        printf(" \n enter no of that operation you want to do :\n 1) insert in  stack \n 2) delete from stack \n 3) dispaly \n 4) exit \n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            top = insertion();
            break;
        case 2:
            top = deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        }
    } while (input != 4);
}