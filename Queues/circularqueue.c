#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int front=-1;
int rear=-1;
int queue[MAX];
void enQueue(int ele)
{
    if(front==(rear+1)%MAX)
    {
        printf("Full\n");
    }
    else
    {
        rear=(rear+1)%MAX;
        queue[rear]=ele;
    }
}
void deQueue()
{
    if(front>rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The deleted item is %d\n",queue[front]);
        front=(front+1)%MAX;
    }
}
void display()
{
    printf("The elements are:\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    while(1)
    {
        int n,item;
        printf("Enter the choice:\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter the element to be inserted:\n");
                scanf("%d",&item);
                enQueue(item);
                break;

            case 2:
                deQueue();
                break;

            case 3:
                display();
                break;
            case 4:
                exit(1);

            case 5:
                printf("Invalid Input!!\n");
        }
    }
}