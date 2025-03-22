#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *reverseLL(node *ptr)
{
    node *prev = NULL, *next, *current = ptr;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
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

node* createNode(int value){
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
void main()
{
    node *first = createNode(10);
    first->next=createNode(20);
    first->next->next=createNode(30);

    printLL(first);
    first=reverseLL(first);
    printLL(first);
}