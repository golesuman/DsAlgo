#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;

};

Node * head=NULL;
Node* getNode()
{
    Node *ptr=(Node *)malloc(sizeof(Node));
    return ptr;
}
void insertion(int item)
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
void deleteNode()
{
    Node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
void display()
{
    Node *temp=head;
    while(temp!=NULL)
    {

        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    insertion(5);
    insertion(6);
    insertion(9);
    display();
    deleteNode();
    cout<<endl;
    cout<<"After Deletion"<<endl;
    display();
}
