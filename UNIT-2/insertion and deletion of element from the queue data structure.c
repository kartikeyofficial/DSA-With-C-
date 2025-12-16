#include<stdio.h>
#include<stdlib.h>
void queue_insertion(int);
void queue_deletion();
void traverse();
int queue[20];
int front= -1, rear = -1, item;
int size;
void main()
{
    int ch;
    printf("Enter the Size Of queue: ");
    scanf("%d",&size);
    if(size>20)
    {
        printf("\n Invalid Size of Queue, size of Array is 20");

    }
    do
    {
        printf("\n1. Insertion\n2. Deletion\n3. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            queue_insertion(size);
            printf("\nAfter Inserttion Queue are as Follows:");
            traverse();
            break;
            case 2:
            queue_deletion();
            printf("\nAfter Deletion the Queue are as Follows:\n");
            traverse();
            break;
            case 3:
            return 0;
            
        }

    }
    while(ch!=0);
    
} 
void queue_insertion(int s)
{
    printf("\nEnter The Element for Insertion In Queue:");
    scanf("%d",&item);
    if(rear <s-1)
    {
        rear++;
        queue[rear]=item;
        if(front==-1)
        front=0;
    }
    else
    {
        printf("\n Insertion is Not Possible");
    }
}
void queue_deletion()
{
    if(front==-1)
    {
        printf("\n Underflow");
        return;
    }
    else
    {
        item = queue[front];
        printf("\n Deletion Item is =%d",item);

    }
    if(front==rear)
    {
        front= -1;
        rear= -1;
    }
    else
    {
        front= front+1;

    }
    
}
void traverse()
{
    int i;
    if(front==-1)
    return;
    for(i=front;i<=rear; i++)
    {
        printf("%d,", queue[i]);
    }
}