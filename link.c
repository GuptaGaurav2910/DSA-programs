#include <stdio.h>
#include <stdlib.h>
int i=1;
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *createlink()
{
    struct node *new_node;
    int num;

    while (1)
    {
        printf("enter value of node %d : \n ", i);
        printf("Enter -1 to exit: \n");
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = start;
        start = new_node;
        i++;
    }
    return start;
}
struct node *displayNode()
{
    if(i==1)
    {
        printf("link list is empty : \n ");
        goto label;
    }
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ,", ptr->data);
        ptr = ptr->next;
    }
    label :
    return start;
}

int main()
{
    int choice;
    do
    {
        printf("\n 1) Enter 1 to create link list \n");
        printf("2) Enter 2 for display link list \n");
        printf("3) Enter 3 for exit; \n");
        printf("enter your choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            start = createlink();
            break;
        case 2:
            start = displayNode();
        case 3:
            break;
        }
    } while (choice != 3);
    return 0;
}