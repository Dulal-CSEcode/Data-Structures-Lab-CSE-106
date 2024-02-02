#include <stdio.h>
#include <stdlib.h>
struct deletion
{
    int data;
    struct deletion *next;
};
struct deletion *head = NULL, *temp;

void beg()
{
    struct deletion *newnode;
    newnode = (struct deletion *)malloc(sizeof(struct deletion));
    if (newnode == NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        int value;
        printf("\nwhich value added in beg:\n");
        scanf("%d", &value);
        newnode->data = value;
        // newnode->data = 5;
        // newnode->data = 4;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = NULL;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
}
void end()
{
    struct deletion *newnode;
    newnode = (struct deletion *)malloc(sizeof(struct deletion));
    if (newnode == NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        int value;
        printf("\nwhich value added in beg:\n");
        scanf("%d", &value);
        newnode->data = value;
        // newnode->data = 25;
        // newnode->data = 40;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = NULL;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
        }
    }
}
void AtApos()
{
    struct deletion *newnode;
    newnode = (struct deletion *)malloc(sizeof(struct deletion));
    if (newnode == NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        int value, pos, i = 1;
        printf("\nwhich position add value:\n");
        scanf("%d", &pos);
        printf("\nwhich value added in anyposition:\n");
        scanf("%d", &value);
        newnode->data = value;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = NULL;
        }
        else
        {
            temp = head;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}
void display()
{
    if (head == NULL)
    {
        printf("\nDo not any node Create\n");
    }
    else
    {
        int c = 0;
        while (head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
            ++c;
        }
        printf("\ntotal element->%d:", c);
    }
}
void search()
{
    struct deletion *ptr;
    int flag = 0, i = 0;
    ptr == head;
    if (ptr == NULL)
    {
        printf("\nempty \n");
    }
    else
    {
        int n;
        printf("\nwhich value search:\n");
        scanf("%d", &n);
        while (ptr != NULL)
        {
            if (ptr->data == n)
            {
                flag = 1;
                break;
            }
            ptr = ptr->next;
            i++;
        }
    }
    if (flag == 0)
    {
        printf("\nvalue not found.\n");
    }
    else
    {
        printf("\n %d value is position-%d:\n", ptr->data, i + 1);
    }
}
void sort()
{
    struct deletion *index = NULL;
    temp = head;
    while (temp != NULL)
    {
        index = temp->next;
        while (index != NULL)
        {
            if (temp->data > index->data)
            {
                int p = temp->data;
                temp->data = index->data;
                index->data = p;
            }
            index = index->next;
        }
        temp = temp->next;
    }
}
void dbeg()
{
}
void dend()
{
}
void dAtApos()
{
}
void insert()
{
    int ch;
    printf("\t\t\t\t---\n\t\t\t\t1.Beg->\n\t\t\t\t2.End->\n\t\t\t\t3.AtApos->\n\n\t\t\t\t---\n");
    printf("\nenter which position insert:\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        beg();
        break;
    case 2:
        end();
        break;
    case 3:
        AtApos();
        break;
    default:
        printf("\nInvalid chioce\n");
        break;
    }
}
void deletion()
{
    int c;

    printf("\t\t\t\t---\n\t\t\t\t1.DBeg->\n\t\t\t\t2.DEnd->\n\t\t\t\t3.DAtApos->\n\n\t\t\t\t---\n");
    printf("\nenter which position Delete:\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        dbeg();
        break;
    case 2:
        dend();
        break;
    case 3:
        dAtApos();
        break;
    default:
        printf("\nInvalid chioce\n");
        break;
    }
}
int main()
{
    int n;
    while (1)
    {
        int n;
        while (1)
        {
            printf("\t\t\t\t\t------------------------------");

            printf("\n\t\t\t\t\t\t|---1.Insert---|\n\t\t\t\t\t\t|---2.Deletion-|\n\t\t\t\t\t\t|---3.Display--|\n\t\t\t\t\t\t|---4.Search---|\n\t\t\t\t\t\t|---5.Sort-----|\n\t\t\t\t\t\t|---6.Exit-----|\n");
            printf("\t\t\t\t\t------------------------------");
            printf("\n");
            printf("\nselected any item above:\n");

            scanf("%d", &n);
            switch (n)
            {
            case 1:
                insert();

                break;
            case 2:
                deletion();

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
            case 6:
                exit(0);
                break;
            default:
                printf("------------");
                printf("\nInvalid chioce again choice \n");
                printf("------------");
                break;
            }
        }

        return 0;
    }
}
