#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Queue is overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % MAX;
        queue[rear] = value;

        printf("%d inserted into queue\n", queue[rear]);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        int item = queue[front];

        printf("%d deleted from queue\n", item);

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}

void peek()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("%d is the front element\n", queue[front]);
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i = front;

        printf("Queue elements: ");

        while (1)
        {
            printf("%d ", queue[i]);

            if (i == rear)
            {
                break;
            }

            i = (i + 1) % MAX;
        }

        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Circular Queue ---\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. FRONT\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int n;
            printf("Enter value: ");
            scanf("%d", &n);
            enqueue(n);
            break;
        }

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Program ended\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}