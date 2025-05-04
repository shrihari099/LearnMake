/////////////////////////////////////////////////// typedef ///////////////////////////////////////////////////////////////////////
/// @brief 
typedef struct node
{
    int data;
    struct node* next;
} node;

/////////////////////////////////////////////////// fucntions ///////////////////////////////////////////////////////////////////////

/// @brief 
/// @param ptr 
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

/// @brief 
/// @param value 
/// @return 
node* createNode(int value){
    node* newNode=(node *)malloc(sizeof(node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}


