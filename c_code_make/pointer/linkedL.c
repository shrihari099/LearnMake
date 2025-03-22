#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;

void printLL(node* ptr){
	while(ptr != NULL){
		printf("%d \t",ptr->data);
		ptr=ptr->next;
	}
}

node* insertBegin(node* head,int data){
	node* newNode = (node*) malloc(sizeof(node));
	newNode->next=head;
	newNode->data=data;
	return newNode;
}

node* insertNodebetween(node* head,int data,int index){
	node* newNode = (node*) malloc(sizeof(node));
	node* ptr=head;
	int i=0;
	newNode->data=data;
	while(i != index-1){
		ptr= ptr->next;
		i++;
	}
	newNode->next=ptr->next;
	ptr->next=newNode;
	return head;
}


int main(){
	node* head = (node*) malloc(sizeof(node));
	head->data=30;
	head->next=NULL;
	//printLL(head);
	head=insertBegin(head,10);
	printLL(head);
	head=insertNodebetween(head,100,1);
	printf("insert node between \n");
	printLL(head);

}
