#include<stdlib.h>
#include<stdio.h>
#include<header.h>

int main(){
    Node* head=(Node*)malloc(sizeof(struct Node));
    Node* second=(Node*)malloc(sizeof(struct Node));
    Node* third=(Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    
    second->data=20;
    second->next=third;

    third->data=30;
    third->next =NULL;

	head=InsertBegin(head,54);
	head=InsertBetween(head,69,2);
	head=InsertEnd(head,699);
	print_singlyLL(head);
    bool res=searchData(head,69);
	printf("element searching.. and result is %d \n",res);
	int counter=findLength(head);
	printf("total elements or length of LL is %d \n",counter);
  //  free(head);
  //  free(second);
  //  free(third);

	printf("default LL is \n");
	print_singlyLL(head);
	printf("after deleting 1st element LL is \n");
	head=DeleteAtFirst(head);
	print_singlyLL(head);

	printf("deleting LL at index 2 \n");
	head=DeleteAtIndex(head,2);
	print_singlyLL(head);
	printf("after last element LL \n");
	head=DeleteEnd(head);
	print_singlyLL(head);

}


