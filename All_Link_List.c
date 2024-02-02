#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next,*previous;
};
struct node *head = NULL;
void display()
{
    struct node *n;
    n = head;
    if (head == NULL)
    {
        printf("\nEmpty link list\n");
    }
    else
    {
        while (n != NULL)
        {
            printf("%d-> ", n->data);
            n = n->next;
        }
    }
}

void beg()
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\nNO space in Memory\n");
    }
    else
    {
        int v;
        printf("\nWhich value add in beg:\n");
        scanf("%d", &v);
        new_node->data = v;
        new_node->next = NULL;
        new_node->previous=NULL;
        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
            new_node->previous=NULL;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }
}

void end()
{
    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\nNO space in Memory\n");
    }
    else
    {
        int v;
        printf("\nWhich value add in end:\n");
        scanf("%d", &v);
        new_node->data = v;

        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
            new_node->previous=NULL;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->next = NULL;
        }
    }
}

void atany()
{
    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\nNO space in Memory\n");
    }
    else
    {
        int v, pos, i = 0;
        printf("\nEnter the position :\n");
        scanf("%d", &pos);
        printf("\nWhich value add in any position:\n");
        scanf("%d", &v);
        new_node->data = v;

        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
            new_node->previous=NULL;
        }
        else
        {
            temp = head;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }
}
void delbeg()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        printf("\nValue delete from beg-%d:", ptr->data);
        head = head->next;
    }
    free(ptr);
}
void delend()
{
    struct node *ptr, *previous;

    if (head == NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            previous = ptr;
            ptr = ptr->next;
        }
        previous->next = NULL;
        printf("\nValue delete from beg-%d:", ptr->data);
    }
    free(ptr);
}
void delany()
{

    struct node *ptr, *previous;

    if (head == NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        int i = 0, pos;
        printf("\nWhich position value delete:\n");
        scanf("%d", &pos);
        ptr = head;
        while (i < pos - 1)
        {
            previous=ptr;
            ptr = ptr->next;
            i++;
        }
        printf("\nValue delete from beg-%d:", ptr->next->data);
        previous->next = ptr->next->next;
    }
    free(ptr);
}
int main()
{
    int n;
    while (1)
    {
        printf("\n1.beg\n2.end\n3.Atany\n4.delbeg\n5.delend\n6.delAny\n7.Display\n0.exit\n");
        printf("\nEnter your choice:\n");
        scanf("%d", &n);
        switch(n)
        {
        case 1:
            beg();
            break;
        case 2:
            end();
            break;
        case 3:
            atany();
            break;
        case 4:
            delbeg();
            break;
        case 5:
            delend();
            break;
        case 6:
            delany();
            break;
        case 7:
            display();
            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid choice\n");
        }
    }
    return 0;
}