#include <stdio.h>
#include <malloc.h>
#include "singly_LL/singly.h"


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

void main()
{
    node *first = createNode(10);
    first->next=createNode(20);
    first->next->next=createNode(30);

    printLL(first);
    first=reverseLL(first);
    printLL(first);
}