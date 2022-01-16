#include<stdio.h>
#include<stdlib.h>

struct Node { 
    int data;
    struct Node *next;


};

struct Node *head=NULL;
struct Node* getNode()
{
    struct Node *ptr ;
   
    ptr=(struct Node*)malloc(sizeof(struct Node));
    return ptr;
}
void insertAttheEnd(int item)
{
    struct Node *nnode,*temp;
    temp=head;
    nnode=getNode();
    nnode->data=item;
    if(head==NULL)
    {
        nnode->next=NULL;
        head=nnode;
    }
    else 
    {  
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        nnode->next=NULL;
        temp->next=nnode;
        temp=nnode;


    }
    
}

void display(struct Node * head)
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    
}
int main()
{
    insertAttheEnd(1);
    insertAttheEnd(2);
    printf("The inserted items are:\n");
    display(head);
}