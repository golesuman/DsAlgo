#include<iostream>
using namespace std;
class Node
{
     public:
     int data;
     Node* link;
     Node(int val)
     {
          data=val;
          link=NULL;

     }
     

};
void insertion(Node* &head,int val)
{
     Node* ptr= new Node(val);
     if(head==NULL)
     {
          head=ptr;
          return;
     }
     Node* temp=head;
     while(temp->link!=NULL)
     {
          temp=temp->link;

     }
     temp->link=ptr;

}
void display(Node* head)
{
     Node* temp=head;
     while(temp!=NULL)
     {
          cout<<temp->data<<"->";
          temp=temp->link;

     }
     cout<<"NUll"<<endl;
}
int main()

{
     Node* head=NULL;
     insertion(head,1);
     insertion(head,2);
     insertion(head,3);
     display(head);

}