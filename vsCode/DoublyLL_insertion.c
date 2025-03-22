#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

void forwardTraverse(node *ptr)
{
    node *first = ptr;
    printf("Forwarding \n");
    while (first != NULL)
    {
        printf(" %d\t ", first->data);
        first = first->next;
    }
    printf("\n");
}

void backwardTraverse(node *ptr)
{
    node *back = ptr;
    printf("backwarding \n");
    while (back != NULL)
    {
        printf(" %d\t ", back->data);
        back = back->prev;
    }
    printf("\n");
}

node *insertAtBegin(node *ptr)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = 5;
    newNode->next = ptr;
    if (ptr != NULL)
    {
        ptr->prev = newNode;
    }
    // Return the new node as the head of the doubly linked list
    return newNode;
}

node *insertAtEnd(node *ptr)
{
    node *newNode = (node *)malloc(sizeof(node));
    node *curr=ptr;
    newNode->data = 5000;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next=newNode;
    newNode->prev=curr;
    newNode->next=NULL;

    // Return the new node as the head of the doubly linked list
    return ptr;
}

node *insertAtIndex(node *ptr,int index)
{
    node *newNode = (node *)malloc(sizeof(node));
    node *current=ptr;
    newNode->data = 8;
    int i=0;

    if (index == 0) {
        // Insert at the beginning
        newNode->next = ptr;
        ptr->prev = newNode;
        return newNode; // New node becomes the new head
    }

    while (i != index-1 && current !=NULL)
    {
        current= current->next;
        i++;
    }
    newNode->next=current->next;
    newNode->prev=current;
    if (current->next != NULL) {
        current->next->prev = newNode; // Update the prev pointer of the next node
    }
    current->next=newNode;
    
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

    // forwardTraverse(first);
    // backwardTraverse(third);

    first = insertAtBegin(first);
    //printLL(first);

    first = insertAtIndex(first,1);
    //printLL(first);

    first = insertAtEnd(first);
    printLL(first);

    

    // first = insertNodeBegin(first);
    // // printLL(first);

    // first = insertNodebetween(first, 3);
    // // printLL(first);

    // first = insertNodeEnd(first);
    // printLL(first);
}