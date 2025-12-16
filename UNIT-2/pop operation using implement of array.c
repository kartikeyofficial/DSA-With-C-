#include <stdio.h>

#define MAX 20  

int stack[MAX];
int top = -1;

void push(int value) {
    if (top < MAX - 1)
     {
        stack[++top] = value;
        printf("%d pushed to stack.\n", value);
    } 
    else 
    {
        printf("Stack Overflow!\n");
    }
}

int pop() 
{
    if (top >= 0) 
    {
        return stack[top--];
    } 
    else 
    {
        printf("Stack Underflow!\n");
        return -1;
    }
}
void display() 
{
    if (top == -1) 
    {
        printf("Stack is empty.\n");
    } 
    else
     {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) 
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
 {
    int choice, value;
    
    while (1) 
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1) {
                    printf("%d popped from stack.\n", value);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}



    

