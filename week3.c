#include<stdio.h>
#include<stdlib.h>
#define size 4
int q[size];
int front=-1;
int rear=-1;
isEmpty()
{
    if(front==-1&&rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
isFull()
{
    if(rear==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
insert(int x)
{
    if(isFull())
    {
        printf("\nQueue overflow");
    }
    else if(isEmpty())
    {
        front=0;
        rear++;
        q[rear]=x;
    }
    else
    {
        q[++rear]=x;
    }
}
delete()
{
    if(isEmpty())
    {
        printf("\nqueue underflow");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
}
display()
{
    if(isEmpty())
    {
        printf("\nqueue underflow");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("\n%d\t",q[i]);
        }
    }
}
void main()
{
    int op,value;
 while(1)
 {
     printf("\nEnter the option\n1.Insert\n2.delete\n3.display\n4.exit\n");
     scanf("\n%d",&op);
     switch(op)
     {
        case 1: printf("\nEnter the value to be inserted into the queue: ");
                scanf("%d",&value);
                insert(value);
                break;
        case 2:printf("%d element deleted",q[front]);
               delete();
               break;
        case 3:display();
               break;
        case 4:exit(0);
               break;
        default:printf("\nWrong option entered");
                break;
     }
 }
  
   
}
    
