#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

struct node* create_node(){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter integer\n");
    scanf("%d",&(temp->data));
    temp->next=NULL;
    return temp;
}

void add_front(){
    if(head==NULL){
        head=create_node();
    }else{
        struct node* temp=create_node();
        temp->next=head;
        head=temp;
    }
}

void add_end(){
    if(head==NULL){
        head=create_node();
    }else{
        struct node* temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=create_node();
    }
}
int length()
{
    int count=1;
    struct node *temp=head;
    while(temp!=NULL)
    {
            temp=temp->next;
            count++;

    }
    return count;
}

void add_between(){
    if(head==NULL){
        printf("No previous elements exist.New list being created\n");
        head=create_node();
    }else{
        printf("Where is the element to be inserted?\n");
        int pos;
        scanf("%d",&pos);
        struct node* temp=head;
        if(pos>length())
        {
            printf("\noverflow\n");
        }
        else{
        while(--pos!=1)
        temp=temp->next;
        struct node* temp1=temp->next;
        temp->next=create_node();
        (temp->next)->next=temp1;}
    }
}

void display(){
    if(head==NULL){
        printf("No elements have been inserted");
    }else{
    struct node* i=head;
    while (i->next!=NULL)
    {
        printf("%d  ",i->data);
        i=i->next;
    }
    printf("%d  ",i->data);
    printf("\n");
    }
}

void main(){
    int choice;
    while (1)
    {

            printf("1.Adding at front\n2.append\n3.insert at specified position\n4.print\n5.Exit\n");

        printf("Enter choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            add_front();
            break;

        case 2:
            add_end();
            break;

        case 3:

            add_between();
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);

        default:printf("Wrong choice");
            break;
        }
    }


}
