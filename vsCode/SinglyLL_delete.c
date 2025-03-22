#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *deleteNodeEndAtBegin(node *ptr)
{
    node *firstNode = ptr;
    ptr=ptr->next;
    free(firstNode);
    return ptr;
}

node *deleteNodebetween(node *ptr, int index)
{
    node *preNode = ptr;
    node *current = ptr->next;
    int i = 0;

    while (i != index-1)
    {
        preNode=preNode->next;
        current = current->next;
        i++;
    }
    preNode->next=current->next;
    free(current);
    return ptr;
}

node *deleteNodeEndAtEnd(node *ptr)
{
    node *preNode = ptr;
    node *current = ptr->next;

    while (current->next != NULL)
    {
        preNode=preNode->next;
        current = current->next;
    }
    preNode->next=NULL;
    free(current);
    return ptr;
}


void printLL(node *ptr)
{
    printf("Start \n");
    while (ptr != NULL)
    {

        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
    printf("End \n");
}

void main()
{
    node *first = (node *)malloc(sizeof(node));
    node *second = (node *)malloc(sizeof(node));
    node *third = (node *)malloc(sizeof(node));

    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;

    //first = deleteNodeEndAtBegin(first);
    //printLL(first);

    //first = deleteNodebetween(first,1);
    //printLL(first);

    first = deleteNodeEndAtEnd(first);
    printLL(first);
}