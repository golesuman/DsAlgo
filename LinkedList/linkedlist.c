#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *link;

};
struct  Node *start=NULL;
struct  Node *createNode()
{
    struct Node* n;
    n=(struct Node*)malloc(sizeof(struct Node));
    return n;
}
void insertNode()
{
    struct Node * temp, *t;
    temp=CreateNode();
    printf("Enter the element\n");
    scanf("%d",&temp->info);
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        t=start;
        while(t->link!=NULL)
        {
            t=t->link;
        }
    t->link=temp;
    }

}