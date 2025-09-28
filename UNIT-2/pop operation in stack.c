#include <stdio.h>

#define MAX 20

int stack[MAX];
int top = -1;

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
        printf("\n1. Pop\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            
            case 1:
                value = pop();
                if (value != -1) {
                    printf("%d popped from stack.\n", value);
                }
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}



    

