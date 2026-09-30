#include <stdio.h>
#define MAX 5

int top = -1;
int number[MAX];

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        top++;
        number[top] = value;
        printf("%d pushed into stack\n", number[top]);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        int item = number[top];
        printf("%d deleted from stack\n", item);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is the top element of stack\n", number[top]);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int n;
            printf("Enter the value to push: ");
            scanf("%d", &n);
            push(n);
            break;
        }

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            printf("Program ended\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}