#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//push link?
//https://github.com/pan78m/https---github.com-pan78m-link_list
struct node
{
    int data;

    struct node *next;
};
struct node *head = NULL;
// insert here start!!
//->>insert begenning
void insert_beg()
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\noverflow list\n");
    }
    else
    {
        int v;
        printf("value add beg:\n");
        scanf("%d", &v);
        new_node->data = v;
        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }
}
// insert end of the list?
void insert_end()
{
    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\noverflow list\n");
    }
    else
    {
        int v;
        printf("value add End:\n");
        scanf("%d", &v);
        new_node->data = v;
        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
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
//->>insert Any position of the node.
void insert_at_any_pos()
{
    struct node *new_node, *ptr;
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\noverflow list\n");
    }
    else
    {
        int v, i = 1, pos;
        printf("\nwhich pos value add:\n");
        scanf("%d", &pos);
        printf("value add any position:\n");
        scanf("%d", &v);
        new_node->data = v;
        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
        }
        else
        {
            ptr = head;
            while (i < pos)
            {
                ptr = ptr->next;
                i++;
            }
            new_node->next = ptr->next;
            ptr->next = new_node;
        }
    }
}

// insert function.
void insert()
{
    int n;

    printf("\n1.InsertBeg\n2.InsertEnd\n3.InsertAtAPos\n\n");
    printf("enter your choice for insert data in link list:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        insert_beg();
        break;
    case 2:
        insert_end();
        break;
    case 3:
        insert_at_any_pos();
        break;

    default:
        printf("Invalid choice");
        break;
    }
}

// delete start here!!
//->>delete begenning
void del_beg()
{
    struct node *ptr;
    // temp = head;
    if (head == NULL)
    {
        printf("\nempty list\n");
    }
    else
    {
        ptr = head;
        printf("delete beg is %d\n", ptr->data);
        head = ptr->next;
    }
    free(ptr);
}
//->> delete end of the node?
void del_end()
{
    struct node *ptr, *pre;
    if (head == NULL)
    {
        printf("\nempty list\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        printf("delete only one node is:%d\n", head->data);
        free(head);
    }
    else
    {
        pre = ptr = head;
        while (ptr->next != NULL)
        {
            pre = ptr;
            ptr = ptr->next;
        }
        ptr->next = NULL;
        printf("delete end is %d\n", ptr->data);
        free(ptr);
        
    }
}
// delete any position of the node?
void del_at_any_pos()
{
    struct node *temp;

    int i = 1, pos;
    printf("\nwhich position node delete:\n");
    scanf("%d", &pos);
    if (head == NULL)
    {
        printf("\nempty of the list.\n");
    }
   
    else
    {
        temp = head;
        while (i < pos)
        {
            if (temp->next != NULL)
            {
                temp = temp->next;
            }
            i++;
        }
        temp->next = temp->next->next;
    }
}

// delete function
void del()
{
    int n;

    printf("\n1.DelBeg\n2.DelEnd\n3.DeAtAPos\n\n");
    printf("enter your choice for delete data:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        del_beg();
        break;
    case 2:
        del_end();
        break;
    case 3:
        del_at_any_pos();
        break;

    default:
        printf("Invalid choice");
        break;
    }
}

// Display or Show function of the node?
void display()
{
    int item = 0;
    struct node *n;
    n = head;
    if (n == NULL)
    {
        printf("\nEmpty Link list\n");
    }
    else
    {
        while (n != NULL)
        {
            printf("%d  ", n->data);
            item++;
            n = n->next;
        }
    }
    printf("\ntotal node is found=%d\n", item);
}
// Search function of the node
void search()
{
    int i = 0, value, found = 0;
    printf("\nwhich value search:\n");
    scanf("%d", &value);
    if (head == NULL)
    {
        printf("\nEmpty Link list\n");
    }
    else
    {
        struct node *temp;
        temp = head;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                found = 1;
                break;
            }
            i++;
            temp = temp->next;
        }
    }
    if (!found)
    {
        printf("\n Data not found\n");
    }
    else
    {
        printf("\nvalue position is=%d\n", i + 1);
    }
}
// sort of the node
void sort()
{
    struct node *current, *index = NULL;
    current = head;

    while (current != NULL)
    {
        index = current->next;
        while (index != NULL)
        {
            if ((current->data) > (index->data))
            {
                int temp = current->data;
                current->data = index->data;
                index->data = temp;
                display();
                printf("\n");
            }
            index = index->next;
        }
        current = current->next;
    }
}
// main function of the node.
int main()
{

    int c;
    while (1)
    {
        printf("\n1.Insert\n2.DeLete\n3.Display\n4.Search\n5.Sort\n\n0.Exit\n");
        printf("enter your choice:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            sort();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Invalid choice");
            break;
        }
    }
}
