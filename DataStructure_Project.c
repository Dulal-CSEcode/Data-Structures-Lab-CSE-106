#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
typedef struct cyber
{

    int id;
    char name[20];
    struct topics
    {

        int scode;
        char sname[20];
        int information;
    } tp[4];
    int total;

} cyber;

void heading()
{
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
    printf("\n\t\t\t\t|       WELCOME TO CYBER MANAGEMENT SYSTEM       |\t\t");
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t\n");
}
void main_heading()
{
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
    printf("\n\t\t\t\t|              CYBER MANAGEMENT SYSTEM            |\t\t");
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
}
void sortbyName()
{
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
    printf("\n\t\t\t\t|        CYBER MANAGEMENT SYSTEM SORT BY NAME      |\t\t");
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
}
void sortbyID()
{
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
    printf("\n\t\t\t\t|        CYBER MANAGEMENT SYSTEM SORT BY ID      |\t\t");
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
}
void search_value()
{
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
    printf("\n\t\t\t\t|        CYBER MANAGEMENT SYSTEM SEARCH      |\t\t");
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
}
void update_value()
{
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
    printf("\n\t\t\t\t|        CYBER MANAGEMENT SYSTEM UPDATE      |\t\t");
    printf("\n\t\t\t\t--------------------------------------------------\t\t\t\t");
}
// Create item
void create()
{
    cyber *s;
    FILE *fp;
    int n, i, j;
    printf("\n\t\t\t\t\tenter how many user you want:");
    scanf("%d", &n);
    s = (cyber *)calloc(n, sizeof(cyber));
    fp = fopen("t.txt", "w");
    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        printf("\n\t\t\t\t\tenter the id:");
        scanf("%d", &s[i]);
        fflush(stdin);
        printf("\n\t\t\t\t\tenter the name:");
        scanf("%[^\n]s", s[i].name);
        for (j = 0; j < 4; j++)
        {
            printf("\n\t\t\t\t\tenter the information %d:", j + 1);
            scanf("%d", &s[i].tp[j].information);
            s[i].total += s[i].tp[j].information;
        }
        fwrite(&s[i], sizeof(cyber), 1, fp);
    }
    fclose(fp);
}
// Display item
void display()
{
    cyber s1;
    FILE *fp;
    int j;
    fp = fopen("t.txt", "r");
    while (fread(&s1, sizeof(cyber), 1, fp))
    {
        printf("\n\t\t|  %-10d%-20s|  \t\t", s1.id, s1.name);
        for (j = 0; j < 4; j++)
        {
            printf("%4d", s1.tp[j].information);
        }
        printf("%5d ", s1.total);
    }
}

// Appened item
void appened()
{

    cyber *s;
    FILE *fp;
    int n, i, j;
    printf("\n\t\t\t\t\tenter how many user you want:");
    scanf("%d", &n);
    s = (cyber *)calloc(n, sizeof(cyber));
    fp = fopen("t.txt", "a");
    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        printf("\t\t\t\t\tenter the id:");
        scanf("%d", &s[i]);
        fflush(stdin);
        printf("\t\t\t\t\tenter the name:");
        scanf("%[^\n]s", s[i].name);
        for (j = 0; j < 4; j++)
        {
            printf("\t\t\tenter the information %d:", j + 1);
            scanf("%d", &s[i].tp[j].information);
            s[i].total += s[i].tp[j].information;
        }
        fwrite(&s[i], sizeof(cyber), 1, fp);
    }
    fclose(fp);
}
// no_of_rec
void nofr()
{
    cyber *s;
    FILE *fp;
    int n;
    printf("\n\t\t\t\t How Many User Are Avaiable:\n");
    fp = fopen("t.txt", "r");

    fseek(fp, 0, SEEK_END);
    n = ftell(fp) / sizeof(cyber);
    printf("\n\n\t\t\t\t\tNo of Records =%d", n);
}
// Search item
void search()
{
    main_heading();
    search_value();
    cyber s1;
    FILE *fp;
    int j;
    fp = fopen("t.txt", "r");
    int id, flag = 0;
    printf("\n\t\t\twhich records search enter id:");
    scanf("%d", &id);
    while (fread(&s1, sizeof(cyber), 1, fp))
    {
        if (s1.id == id)
        {
            flag = 1;

            printf("\n\t\t%-10d%-20s", s1.id, s1.name);
            for (j = 0; j < 4; j++)
            {
                printf("%4d", s1.tp[j].information);
            }
            printf("%5d ", s1.total);
        }
    }
    if (!flag)
    {
        printf("\n\t\t\t\t\tRecords not found\n");
    }
}
// Update item
void update()
{
    main_heading();
    update_value();
    cyber s1;
    FILE *fp;
    int j;
    fp = fopen("t.txt", "r");
    int id, flag = 0;
    FILE *p;
    p = fopen("update data.txt", "w");

    printf("\n\t\t\twhich records update enter id:");
    scanf("%d", &id);
    while (fread(&s1, sizeof(cyber), 1, fp))
    {
        if (s1.id == id)
        {
            s1.total = 0;
            flag = 1;
            fflush(stdin);
            printf("\nenter new name:\n");
            scanf("%[^\n]s", s1.name);

            for (j = 0; j < 4; j++)
            {
                printf("\n\t\t\tenter the new information new user %d:\n", j + 1);
                scanf("%d", &s1.tp[j].information);
                s1.total += s1.tp[j].information;
            }
        }
        fwrite(&s1, sizeof(cyber), 1, p);
    }
    fclose(fp);
    fclose(p);
    if (flag)
    {
        p = fopen("update data.txt", "r");
        fp = fopen("t.txt", "w");
        while (fread(&s1, sizeof(cyber), 1, p))
        {
            fwrite(&s1, sizeof(cyber), 1, fp);
        }

        fclose(fp);
        fclose(p);
    }
    else
    {
        printf("\n Records not found\n");
    }
}
// Delete item
void delete ()
{

    cyber s1;
    FILE *fp;
    int j;
    fp = fopen("t.txt", "r");
    int id, flag = 0;
    FILE *p;
    p = fopen("update data.txt", "w");

    printf("which records delete enter id:");
    scanf("%d", &id);
    while (fread(&s1, sizeof(cyber), 1, fp))
    {
        if (s1.id == id)
        {

            flag = 1;
        }
        else
            fwrite(&s1, sizeof(cyber), 1, p);
    }
    fclose(fp);
    fclose(p);
    if (flag)
    {
        p = fopen("update data.txt", "r");
        fp = fopen("t.txt", "w");
        while (fread(&s1, sizeof(cyber), 1, p))
        {
            fwrite(&s1, sizeof(cyber), 1, fp);
        }

        fclose(fp);
        fclose(p);
    }
    else
    {
        printf("\n Records not found\n");
    }
}
// sort by in screen
void sort_by_id_on_screen()
{
    cyber *s, s1;
    FILE *fp;
    int i, j;
    fp = fopen("t.txt", "r");
    fseek(fp, 0, SEEK_END);
    int n = ftell(fp) / sizeof(cyber);
    s = (cyber *)calloc(n, sizeof(cyber));
    rewind(fp);

    for (i = 0; i < n; i++)
    {
        fread(&s[i], sizeof(cyber), 1, fp);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].id > s[j].id)
            {
                s1 = s[i];
                s[i] = s[j];
                s[j] = s1;
            }
        }
    }
    sortbyID();
    for (i = 0; i < n; i++)
    {

        printf("\n\t\t|  %-10d%-20s  |\t\t", s[i].id, s[i].name);
        for (j = 0; j < 4; j++)
        {
            printf("%4d", s[i].tp[j].information);
        }
        printf("%5d ", s[i].total);
    }
    fclose(fp);
}
// Sort by parmanent BY id
void sort_by_id_in_file()
{
    cyber *s, s1;
    FILE *fp;
    int i, j;
    fp = fopen("t.txt", "r");
    fseek(fp, 0, SEEK_END);
    int n = ftell(fp) / sizeof(cyber);
    s = (cyber *)calloc(n, sizeof(cyber));
    rewind(fp);
    for (i = 0; i < n; i++)
    {
        fread(&s[i], sizeof(cyber), 1, fp);
    }

    fclose(fp);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].id > s[j].id)
            {
                s1 = s[i];
                s[i] = s[j];
                s[j] = s1;
            }
        }
    }
    fp = fopen("t.txt", "w");
    main_heading();
    sortbyID();
    for (i = 0; i < n; i++)
    {
        printf("\n%-10d%-20s", s[i].id, s[i].name);
        for (j = 0; j < 4; j++)
        {
            printf("%4d", s[i].tp[j].information);
        }
        printf("%5d ", s[i].total);
        fwrite(&s[i], sizeof(cyber), 1, fp);
    }

    fclose(fp);
}
// Sort By name
void sort_by_name()
{

    cyber *s, s1;
    FILE *fp;
    int i, j;
    fp = fopen("t.txt", "r");
    fseek(fp, 0, SEEK_END);
    int n = ftell(fp) / sizeof(cyber);

    s = (cyber *)calloc(n, sizeof(cyber));
    rewind(fp);
    for (i = 0; i < n; i++)
    {
        fread(&s[i], sizeof(cyber), 1, fp);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                s1 = s[i];
                s[i] = s[j];
                s[j] = s1;
            }
        }
    }
    main_heading();
    sortbyName();
    for (i = 0; i < n; i++)
    {
        printf("\n\t\t|  %-10d%-20s  |\t\t", s[i].id, s[i].name);
        for (j = 0; j < 4; j++)
        {
            printf("%4d", s[i].tp[j].information);
        }
        printf("%5d ", s[i].total);
    }

    fclose(fp);
}


void menu()
{
    int choice;
    printf("\n\n\n\t\t\t\t\t\t  |<--MENU-->|");
    printf("\n\n\t\t\t\t\t\t1.Create Record");
    printf("\n\n\t\t\t\t\t\t2.Insert Record");
    printf("\n\t\t\t\t\t\t3.Display Record");
    printf("\n\t\t\t\t\t\t4.Search Record");
    printf("\n\t\t\t\t\t\t5.No Of Record");
    printf("\n\t\t\t\t\t\t6.Delete Record");
    printf("\n\t\t\t\t\t\t7.Update Record");
    printf("\n\t\t\t\t\t\t8.Sort In Record By Uer_id on Screen");
    printf("\n\t\t\t\t\t\t9.Sort In Record By Uer_id in File");
    printf("\n\t\t\t\t\t\t10.Sort In Record By User Name");
    printf("\n\t\t\t\t\t\t0.Exit");
    printf("\n\n\t\t\t\t\t\tEnter your choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        system("CLS");
        create();
        system("color F");
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();
        break;
    case 2:
        system("CLS");
        appened();
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();
        break;

    case 3:
        system("CLS");
        main_heading();
        display();
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();

    case 4:
        system("CLS");
        search();
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();
        break;
    case 5:
        system("CLS");
        nofr();
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();
        break;

    case 6:
        system("CLS");
        delete ();
        break;

    case 7:
        system("CLS");
        update();
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();
        break;
    case 8:
        system("CLS");
        sort_by_id_on_screen();
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();
        break;
    case 9:
        system("CLS");
        sort_by_id_in_file();
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();
        break;
    case 10:
        system("CLS");
        sort_by_name();
        printf("\n\n\t\t\t\t\tPress any key to continue ");
        fflush(stdin);
        getchar();
        menu();
        break;
    case 0:
        system("CLS");
        exit(0);
        break;

    default:
        printf("INVALID CHOICE !!!");
    }
}
void user_menu()
{
    int choice;
    printf("\n\n\n\t\t\t\t\t\t  |<--MENU-->|");
    printf("\n\n\t\t\t\t\t\t1.View Your Record");
    printf("\n\t\t\t\t\t\t2.Exit");
    printf("\n\n\t\t\t\t\t\tEnter your choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        system("CLS");
        search();
        break;

    case 2:
        int n;
        printf("\n\t\t\t\tExit OR Main enter 0 for exit or enter 1 for main menu\n");
        scanf("%d", &n);
        if (n == 0)
        {
            system("CLS");
            exit(0);
        }
        else
        {
            menu();
        }

        break;
    }
}
void Signin()
{
    cyber *s;
    FILE *fp;
    int n = 1, i, j;
    s = (cyber *)calloc(n, sizeof(cyber));
    fp = fopen("t.txt", "a");
    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        printf("\n\t\t\t\t\tEnter Password : ");
        scanf(" %d", &s[i]);
        fflush(stdin);
        printf("\n\t\t\t\t\tEnter Username :");
        scanf("%[^\n]s", s[i].name);

        for (j = 0; j < 4; j++)
        {
            printf("\t\t\t\tenter the information %d:", j + 1);
            scanf("%d", &s[i].tp[j].information);
            s[i].total += s[i].tp[j].information;
        }
        fwrite(&s[i], sizeof(cyber), 1, fp);
    }
    fclose(fp);
    system("CLS");
    printf("\n\t\t\t\t\tSuccessfully Signed in ");
    user_menu();
}
void login()
{
    cyber s1;
    FILE *fp;
    int j;
    fp = fopen("t.txt", "r");

    int id, flag = 0;
    char uname[20];

    printf("\n\t\t\tEnter Your Password:");
    scanf("%d", &id);
    printf("\n\t\t\tEnter Username:");
    scanf("%[\n]s", uname);
    while (fread(&s1, sizeof(cyber), 1, fp))
    {
        if (s1.id == id)
        {
            flag = 1;
            system("CLS");
            main_heading();
            printf("\n\n\t\t\t\t\tWELCOME USER!!! LOGIN SUCCESSFULL");
            printf("\n\n");

            printf("\n%-10d%-20s", s1.id, s1.name);
            for (j = 0; j < 4; j++)
            {
                printf("%4d", s1.tp[j].information);
            }
            printf("%5d ", s1.total);

            printf("\n\n\t\t\t\t\tPress any key to continue ");
            fflush(stdin);
            getchar();
            user_menu();
            fflush(stdin);
            getchar();
            user_menu();
        }
        else
        {
            printf("\nIncorrect Username!!! try again");
            int n;
            printf("\nDo You Try Again Input 1 or 0\n");
            scanf("%d", &n);
            if (n == 1)
            {
                Signin();
                fflush(stdin);
            }
        }

        menu();
    }

    if (!flag)
    {
        printf("\n Records not found\n");
    }
}

int main()
{
    while (1)
    {
        char name[30];
        int id;
        int ch;
        char username[20];
        char password[20];

        system("CLS");
        system("color 5F");
        heading();
        printf("\n\n\t\t\t\t\t1) Login as Admin");
        printf("\n\t\t\t\t\t2) Login as user");
        printf("\n\n\t\t\t\t\tEnter your choice (1/2) : ");
        scanf("%d", &ch);
        system("CLS");

        switch (ch)
        {
        case 1:
            system("CLS");
            system("color 4F");
            heading();
            printf("\n\n\t\t\t\t\t\t||    ADMIN LOGIN    ||\t\t\t\t");
            printf("\n\n\n\t\t\t\t\tEnter your Username :");
            scanf("%s", &username);
            printf("\t\t\t\t\tEnter your Password :");
            scanf("%s", &password);

            if (strcmp(username, "admin") == 0)
            {
                if (strcmp(password, "admin") == 0)
                {
                    system("CLS");
                    heading();
                    printf("\n\n\t\t\t\t\tWELCOME ADMIN!!! LOGIN SUCCESSFULL");
                    menu();
                }
                else
                {
                    printf("\t\t\t\t\tIncorrect Password !!! Failed to Login");
                }
            }
            else
            {
                printf("\t\t\t\t\tUsername is invalid !!! Failed to Login");
            }

            break;
        case 2:
            system("CLS");
            heading();
            system("color 2F");
            int cho;
            printf("\n\n\t\t\t\t\t1.Login ");
            printf("\n\t\t\t\t\t2.New user? sign up ");
            printf("\n\t\t\t\t\t\nEnter your Choice : ");
            scanf("%d", &cho);

            switch (cho)
            {
            case 1:
                printf("\n\n\t\t\t\t\t\t||   USER LOGIN    ||\t\t\t\t");
                main_heading();
                login();
                break;

            case 2:
                system("CLS");
                printf("\n\n\t\t\t\t\t\t||   SIGNIN    ||\t\t\t\t");
                main_heading();
                Signin();
                break;

            default:
                printf("\n\t\t\t\t\tInvalid Choice!!!");
                break;
            }

        default:
            printf("\n\n\t\t\t\t\tInvalid Choice!!!");
            break;
        }
    }
}