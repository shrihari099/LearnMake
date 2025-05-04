#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

node *deleteAtBegin(node *ptr)
{
    node *temp = ptr;

    ptr = ptr->next;
    free(temp);
    // Return the new node as the head of the doubly linked list
    return ptr;
}

node *insertAtEnd(node *ptr)
{
    node *curr = ptr;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    free(curr);
    // Return the new node as the head of the doubly linked list
    return ptr;
}

node *deleteAtIndex(node *ptr, int index)
{
    int i = 1;
    if (ptr == NULL)
        return ptr;

    node *current = ptr;
    while (i != index && current != NULL)
    {
        current = current->next;
        i++;
    }

    // Update the pointers of the surrounding nodes
    if (current->prev != NULL)
    {
        current->prev->next = current->next;
    }
    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }

    free(current);
    
    // Return the new node as the head of the doubly linked list
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
    first->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = first;

    third->data = 30;
    third->next = NULL;
    third->prev = second;

    // first=deleteAtBegin(first);
    // printLL(first);
    // first=insertAtEnd(first);
    // printLL(first);
    first = deleteAtIndex(first, 2);
    printLL(first);
}