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
    temp=createNode();
    printf("Enter the element\n");
    scanf("%d",&temp->info);
    if(start==NULL)
    {
        start=temp;
        temp->link=NULL;
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
void display()
{
    
    struct Node *ptr;  
    ptr = start;   

    while(ptr != NULL)  
    {  
        
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d\n",ptr->info);  
            ptr = ptr->link;  
        }  
    }       
}
int main()
{ 
    int choice=0;
    while(choice!=3)
    {
    int n;
    printf("Enter the choice:\n");
    printf("1.Insert Node:\n");
    printf("2.Display\n");
    printf("3.Exit\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        insertNode();
            break;
        case 2:
        display();
            break;
        case 3:
        exit(0);
            break;
        default:
        printf("You have entered the wrong choice!");}}
}