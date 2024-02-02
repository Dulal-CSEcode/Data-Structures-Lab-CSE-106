
#include<stdio.h>
# define MAX 10
char cqueue_arr[MAX];
int front = -1;
int rear = -1;
void insert(char item)
{
if((front == 0 && rear == MAX-1) || (front == rear+1))
{
printf("Queue is full");
return;
}
if(front == -1)
{
front = 0;
rear = 0;
}
else
{
if(rear == MAX-1)
rear = 0;
else
rear = rear+1;
}
cqueue_arr[rear] = item ;
}
void deletion()
{
if(front == -1)
{
printf("Queue empty");
return ;
}
printf("Element deleted from queue is :",cqueue_arr[front]);
if(front == rear)
{
front = -1;
rear=-1;
}
else
{
if(front == MAX-1)
front = 0;
else
front = front+1;
}
}
void display()
{
char front_pos = front,rear_pos = rear;
if(front == -1)
{
printf("Queue is empty");
return;
}
printf("Queue elements:");
if( front_pos <= rear_pos )
while(front_pos <= rear_pos)
{
printf(" %c",cqueue_arr[front_pos]);
front_pos++;
}
else
{
while(front_pos <= MAX-1)
{
printf(" %c",cqueue_arr[front_pos]);
front_pos++;
}
front_pos = 0;
while(front_pos <= rear_pos)
{
printf(" %c",cqueue_arr[front_pos]);
front_pos++;
}
}

}
int main()
{
int choice,item;
do
{
printf("\n1.Insertn\n");
printf("2.Deleten\n");
printf("3.Display\n");
printf("4.Quitn\n");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("Input the element for insertion in queue : ");
scanf(" %c", &item);
insert(item);
break;
case 2 :
deletion();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("Wrong choicen");
}
}while(choice!=4);
return 0;
}
