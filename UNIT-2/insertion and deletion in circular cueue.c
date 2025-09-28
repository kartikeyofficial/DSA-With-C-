#include<stdio.h>
#define MAX 5
void insertion();
void deletion();
void display();
int cqueue[MAX];
int front=-1, rear=-1;
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insertion();
            break;
            case 2:
            deletion();
            break;
            case 3:
            display();
            break;
            case 4:
            return ;
            default:
            printf("\n This Choice Is Not Available: ");
        }
    }
}
void insertion()
{
    int item;
    if((front==0 && rear== MAX-1)||(front==rear+1))
    {
        printf("\nCircular Queue Is Overflow\n");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==MAX-1)
    rear=0;
    else
    rear= rear+1;
    printf("\nEnter The Item To be Inserted to the Queue: ");
    scanf("%d",&item);
    cqueue[rear]=item;
}
void deletion()
{
 int item;

    if(front==-1)
    {
        printf("\nQueue is Underflow\n");
        return;
    }
    item= cqueue[rear];
    printf("\nDeleted item from queue=%d");
    if(front==rear)
    {
        front= -1;
        rear=-1;
    }
    else
    {
        if(front== MAX-1)
        front=0;
        else
        front = front+1;
    }
}
void display()
{
    int front_pos= front;
    int rear_pos=rear;
    if(front_pos==-1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nQueue Element are are as Follows:");
    if(front_pos<=rear_pos)
    while(front_pos<=rear_pos)
    {
        printf("\n%d",cqueue[front_pos]);
        front_pos++;
    }
    else
    {
        while(front_pos<=MAX-1)
        {
            printf("\n%d",cqueue[front_pos]);
            front_pos++;
        }
        front_pos=0;
        while(front_pos<=rear_pos)
        {
            printf("%d",&cqueue[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}