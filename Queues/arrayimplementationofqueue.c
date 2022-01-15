#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int front=-1;
int rear=-1;
int queue[MAX_SIZE];

void push(int item)
{
    if(rear==MAX_SIZE-1)
    {
        printf("Overflow\n");

    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
            queue[++rear]=item;
        
    }
}
void deQueue()
{
    if(front==-1 || front>rear)
    {
        printf("Underflow\n");

    }
    else{
        printf("The deleted item is %d",queue[front]);
        front++;
    }
}


void display()
{
    if(front==-1)
    {
        printf("Underflow\n");

    }
    else


    {
        printf("The elements are :\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
int main()
{
    int item,n;
    while(1)
    {
        printf("\nEnter the choice:\n");
        printf("\n1.Push\n2.Display\n3.Delete\n4.Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter the element to be inserted:\n");
                scanf("%d",&item);
                push(item);
                break;

            case 2:
                display();
                break;
            
            case 3:
                deQueue();
                break;

            case 4:
                exit(0);
            
            default:
                printf("Invalid Choice!!\n");
        }
    }

}