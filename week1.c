#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int push(int*, int*, int, int*);
void pop(int*, int, int*);
void display(int*, int, int*);
void main()
{
    int option;
    int value;
    int top=-1;
    int size;
    int s[size];
    printf("\nEnter the size of the stack");
    scanf("%d", &size);
    while(1)
    {
        printf("\nEnter any option:\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d", &option);
        switch(option)
        {
            case 1:printf("\nEnter the value to be inserted: ");
                     scanf("%d", &value);
                     push(&value, s, size, &top);
                     break;
            case 2:pop(s, size, &top);
                     break;
            case 3:display(s, size, &top);
                     break;
            case 4:exit(0);
                     break;
            default:printf("\nOoops!!!Wrong option entered");
        }
    }
}
int push(int *val, int *arr, int n, int *top)
{
    if(*top==n-1)
    {printf("\nSorry, stack is full...cannot add further elements");}
    else
    {
        *top=*top + 1;
        arr[*top]=*val;
        
    }
}
void pop(int *arr, int n, int *top)
{
    printf("\n%d element is deleted",arr[*top]);
    *top=*top - 1;
}
void display(int *arr, int n, int *top)
{
    int i;
    if(*top>=0)
    {
        for(i=*top;i>=0;i--)
        {printf("%d",arr[i]);}
    }
    else
    {printf("\nStack is empty");}
}

