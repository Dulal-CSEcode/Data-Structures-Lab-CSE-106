#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-08-13 (19:18)
 *
 * @returns int
 */
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void beg()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nthe memory no space empty\n");
    }
    else
    {
        int v;
        printf("\nenter which value add beginning of the link list:\n");
        scanf("%d", &v);
        ptr->data = v;
        printf("Added value beg-%d->\n", ptr->data);
        if (head == NULL)
        {
            head = ptr;
            ptr->next = NULL;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }
    }
}
void end()
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nthe memory no space empty\n");
    }
    else
    {
        int n;
        printf("\nenter which value add end of the link list:\n");
        scanf("%d", &n);
        ptr->data = n;
        printf("Added value end-%d->\n", ptr->data);

        if (head == NULL)
        {
            head = ptr;
            ptr->next = NULL;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
        }
    }
}
void AtApos()
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nthe memory no space empty\n");
    }
    else
    {
        int n, pos, i = 1;
        printf("\nenter the position:\n");
        scanf("%d", &pos);
        printf("\nenter which value add any position of the link list:\n");
        scanf("%d", &n);
        ptr->data = n;
         printf("Added value Any position-%d->\n",ptr->data);
        ptr->next = NULL;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = NULL;
        }
        else
        {
            temp = head;

            while (i < pos)
            {
                temp = temp->next;
                i++;
            }

            ptr->next = temp->next;
            temp->next = ptr;
        }
    }
}
void display()
{
    if (head == NULL)
    {
        printf("\nThe link list is empty.\n");
    }
    else
    {
        while (head != NULL)
        {
            printf("%d|  |->", head->data);
            head = head->next;
        }
        printf("\n");
    }
}
void sort()
{
    struct node *ptr, *min = NULL;
    ptr = head;
    int temp;
    if (ptr == NULL)
    {
        printf("\ndo not found any node.\n");
    }
    else
    {
        while (ptr != NULL)
        {
            min = ptr->next;
            while (min != NULL)
            {
                if (ptr->data > min->data)
                {
                    temp = ptr->data;
                    ptr->data = min->data;
                    min->data = temp;
                }
                min = min->next;
                //  display();
                // printf("\n");
            }
            ptr = ptr->next;
        }
    }
}
void search()
{
    struct node *ptr;

    int v, i = 0, flag = 0;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nthe link list is empty\n");
    }
    else
    {
        printf("\nenter which value search:\n");
        scanf("%d", &v);
        while (ptr != NULL)
        {
            if (ptr->data == v)
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
        printf("\nitem is not found\n");
    }
    else
    {
        printf("%d-item position is:%d\n", v, i + 1);
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("--------------------------");

        printf("\n---\n\t1.Beg\n\t2.End\n\t3.AtApos\n\t4.Display\n\t5.Search\n\t6.Sort\n\t7.Exit\n---\n");
        printf("--------------------------");
        printf("\n");
        printf("\nselected any item above:\n");

        scanf("%d", &n);
        switch (n)
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
        case 4:
            display();
            break;
        case 5:
            search();
            break;
        case 6:
            sort();
            break;
        case 7:
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