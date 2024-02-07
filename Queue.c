#include <stdio.h>
#define MAX 10

void insert();
void delete();
void display();
char queue_array[MAX];

int rear = - 1;
int front = - 1;

void insert()
{
    char item;
    if (rear == MAX - 1)
    printf("Queue null \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf(" %c", &item);
        rear = rear + 1;
        queue_array[rear] = item;
    }
}

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue null \n");
        return ;
    }
    else
    {
        printf("Element deleted :%c\n", queue_array[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%c ", queue_array[i]);
        printf("\n");
    }
}
main()
{
    int choice;
    while (1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit \n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
            }
    }
}
