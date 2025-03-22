#include<header.h>
#include<stdio.h>

void print_singlyLL(Node *ptr){
	while(ptr !=NULL)
	{
	printf("%d \n",ptr->data);
	ptr=ptr->next;
	}
}


