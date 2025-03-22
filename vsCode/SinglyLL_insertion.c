#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

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

    // printLL(first);
    first = insertNodeBegin(first);
    // printLL(first);

    first = insertNodebetween(first, 3);
    // printLL(first);

    first = insertNodeEnd(first);
    printLL(first);
}