#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10
int top=-1;
int a[MAX_SIZE];

void push(int data)
{
    if(top==MAX_SIZE-1)
    {
       cout<<"The stack is full"<<endl;
    }
    else
    {
        a[++top]=data;
        
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        cout<<"The stack is full"<<endl;
    }
    else
    {
        cout<<"The elements in stack are:"<<endl;
        for(i=0;i<=top;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    
}
int main()
{

push(5);
push(6);
push(7);
display();


}
