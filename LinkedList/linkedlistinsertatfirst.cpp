#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};

Node *head=NULL;
Node *getNode()
{
    Node *ptr=(Node *)malloc(sizeof(Node));
    return ptr;

}

void InsertAtBeg(int item)
{
    Node *nnode=getNode();
    nnode->data=item;
    if(head==NULL)
    {
        nnode->next=NULL;
        head=nnode;

    }
    else
    {
        nnode->next=head;
        head=nnode;
        
    }
}
void display()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }


}
int main()
{
    InsertAtBeg(4);
    InsertAtBeg(5);
    printf("The elements in the linked list are:\n");
    display();
    
}