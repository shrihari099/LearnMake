#include<stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* LinkedList_singly(Node head,int data);
void print_singlyLL(Node *ptr);
Node* InsertBegin(Node* head,int data);
Node* InsertBetween(Node* head,int data,int index);
Node* InsertEnd(Node* head,int data);
bool searchData(Node* head,int data);
int findLength(Node* head);

Node* DeleteAtFirst(Node*head);
Node* DeleteAtIndex(Node*head,int index);
Node* DeleteEnd(Node*head);
