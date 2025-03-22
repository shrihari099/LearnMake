#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Define the structure for a Node in the linked list
typedef struct Node {
    int data;              // Data stored in the node
    struct Node* next;     // Pointer to the next node
} Node;

// Function to insert a new node at the beginning of the linked list
Node* InsertBegin(Node* head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for the new node
    newNode->next = head;  // Point the new node to the current head
    newNode->data = data;  // Set the data for the new node
    return newNode;        // Return the new node as the new head
}

// Function to insert a new node at a specific index in the linked list
Node* InsertBetween(Node* head, int data, int index) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for the new node
    Node* current = head; // Start from the head of the list
    int i = 0;

    newNode->data = data; // Set the data for the new node

    // Traverse the list until the node before the desired index
    while (i != index - 1) {
        current = current->next;
        i++;
    }

    newNode->next = current->next; // Point the new node to the next node
    current->next = newNode;       // Point the current node to the new node
    return head;                   // Return the head of the list
}

// Function to insert a new node at the end of the linked list
Node* InsertEnd(Node* head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for the new node
    Node* current = head; // Start from the head of the list

    newNode->data = data; // Set the data for the new node

    // Traverse the list until the last node
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode; // Point the last node to the new node
    newNode->next = NULL;    // Set the next of the new node to NULL
    return head;             // Return the head of the list
}

// Function to search for a specific data value in the linked list
bool searchData(Node* head, int data) {
    Node* current = head; // Start from the head of the list

    // Traverse the list until the end
    while (current != NULL) {
        if (current->data == data) {
            return true; // Return true if the data is found
        }
        current = current->next;
    }
    return false; // Return false if the data is not found
}

// Function to find the length of the linked list
int findLength(Node* head) {
    Node* current = head; // Start from the head of the list
    int count = 0;

    // Traverse the list and count the nodes
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count; // Return the count of nodes
}

// Function to delete the first node of the linked list
Node* DeleteAtFirst(Node* head) {
    Node* temp = head;   // Store the current head in a temporary variable
    head = head->next;   // Move the head to the next node
    free(temp);          // Free the memory of the deleted node
    return head;         // Return the new head
}

// Function to delete a node at a specific index in the linked list
Node* DeleteAtIndex(Node* head, int index) {
    Node* prevNode = head;       // Start from the head of the list
    Node* currentNode = head->next; // Start from the second node
    int i = 0;

    // Traverse the list until the node before the desired index
    while (i < index - 1) {
        prevNode = prevNode->next;
        currentNode = currentNode->next;
        i++;
    }

    prevNode->next = currentNode->next; // Point the previous node to the next node
    free(currentNode);                  // Free the memory of the deleted node
    return head;                        // Return the head of the list
}

// Function to delete the last node of the linked list
Node* DeleteEnd(Node* head) {
    Node* prevNode = head;       // Start from the head of the list
    Node* currentNode = head->next; // Start from the second node

    // Traverse the list until the second last node
    while (currentNode->next != NULL) {
        prevNode = prevNode->next;
        currentNode = currentNode->next;
    }

    prevNode->next = NULL; // Set the next of the second last node to NULL
    free(currentNode);     // Free the memory of the deleted node
    return head;           // Return the head of the list
}
