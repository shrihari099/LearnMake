#include <stdio.h>
#include <malloc.h>
#include "singly.h"


node *insertNodeBegin(node *ptr)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = 5;
    newNode->next = ptr;
    return newNode;
}

node *insertNodebetween(node *ptr, int index)
{
    node *newNode = (node *)malloc(sizeof(node));
    node *current = ptr;
    int i = 0;

    newNode->data = 15;
    while (i != index - 1)
    {
        current = current->next;
        i++;
    }
    newNode->next = current->next;
    current->next = newNode;

    return ptr;
}

node *insertNodeEnd(node *ptr)
{
    node *newNode = (node *)malloc(sizeof(node));
    node *current = ptr;
    int i = 0;

    newNode->data = 500;
    while (current->next != NULL)
    {
        current = current->next;
    }
    newNode->next = NULL;
    current->next = newNode;

    return ptr;
}

void main()
{
    node *first = createNode(10);
    first->next = createNode(20);
    first->next->next = createNode(30);
    first->next->next->next = createNode(40);

    // printLL(first);
    first = insertNodeBegin(first);
    // printLL(first);

    first = insertNodebetween(first, 3);
    // printLL(first);

    first = insertNodeEnd(first);
    printLL(first);
}