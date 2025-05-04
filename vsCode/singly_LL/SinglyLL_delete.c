#include <stdio.h>
#include <malloc.h>
#include "singly.h"


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

void main()
{
    node *first = createNode(10);
    first->next = createNode(20);
    first->next->next = createNode(30);
    first->next->next->next = createNode(40);

    //first = deleteNodeEndAtBegin(first);
    //printLL(first);

    //first = deleteNodebetween(first,1);
    //printLL(first);

    first = deleteNodeEndAtEnd(first);
    printLL(first);
}