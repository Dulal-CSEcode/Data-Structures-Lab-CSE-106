
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Node node;

struct Node{
char name[20];
char id[20];
char mobile_no[20];
char email[30];
char date_of_birth[20];
char gender[20];
char batch[20];
char dept[20];
node *next;
}std,*head=NULL;

FILE *file,*f1;
int f=0,m=0,k=0;



void saved_data(){

   node *temp,*new_node;
    f=0;
    m=0;
    head=NULL;
    rewind(file); //move file position indicator to the beginning
    while((fread(&std,sizeof(std),1,file))==1)
    {
        temp=(node*)malloc(sizeof(node));
        strcpy(temp->name,std.name);
        strcpy(temp->id,std.id);
        strcpy(temp->mobile_no,std.mobile_no);
        strcpy(temp->email,std.email);
        strcpy(temp->batch,std.batch);
        strcpy(temp->dept,std.dept);
        strcpy(temp->id,std.id);
        strcpy(temp->gender,std.gender);
        if(strcmp(temp->gender,"F")==0||strcmp(temp->gender,"f")==0)
            f++;
        if(strcmp(temp->gender,"M")==0||strcmp(temp->gender,"m")==0)
            m++;
        strcpy(temp->date_of_birth,std.date_of_birth);

        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            new_node=temp;
        }
        else
        {
            new_node->next=temp;
            new_node=temp;
        }

    }
}
void addrecord(){
   // print_title()
    char check='y';
    //int k=1;
    while(check=='y'||check=='Y')
    {
        k++;
        printf("\t\tStudent %d:\n",k);

        fflush(stdin);
        printf("\t\t\t\tEnter Name:");
        gets(std.name);
        fflush(stdin);

        printf("\n\t\t\t\tEnter Student ID:");
        scanf("%s",std.id);

        fflush(stdin);
        printf("\n\t\t\t\tEnter Mobile No:");
        gets(std.mobile_no);

        fflush(stdin);
        printf("\n\t\t\t\tEnter E-Mail:");
        gets(std.email);

        fflush(stdin);
        printf("\n\t\t\t\tEnter Batch:");
        gets(std.batch);

        fflush(stdin);
        printf("\n\t\t\t\tEnter Department:");
        gets(std.dept);

        fflush(stdin);
        printf("\n\t\t\t\tIf Female write F or If Male write M:");
        scanf("%s",std.gender);

        printf("\n\t\t\t\tEnter Date of Birth:");
        scanf("%s",std.date_of_birth);

        fwrite(&std,sizeof(std),1,file);
        printf("\n\t\t\t\tDo You Want to Add More Information (y/n)--> ");
        getchar();
        check=getchar();
        printf("\n");
        //k++;
    }

}
void print_title()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t\t\t\t\tSTUDENT MANAGEMENT SYSTEM\n");
    printf("\t\t\t\t\t*-------------------------------------*\n");
    printf("\n\n");
}
void modify_data(){
print_title();
    int check=0;
    char id1[100];
    printf("\n\t\tEnter roll Number to Modify:");
    scanf("%s",id1);

    rewind(file); //move file position indicator to the beginning
    while((fread(&std,sizeof(std),1,file)==1))
    {
        if(strcmp(id1,std.id)==0)
        {
            check=1;
            break;
        }
    }

    if(check==0)
        printf("\n\t\tRecord not found!!!\n\n");
    else
    {
        fseek(file,-sizeof(std),SEEK_CUR);// file position indicator to the current
        printf("\n\t\tEnter new data :\n\n");

         fflush(stdin);
        printf("\t\t\t\tEnter Name:");
        gets(std.name);
        fflush(stdin);

        printf("\n\t\t\t\tEnter Student ID:");
        scanf("%s",std.id);

        fflush(stdin);
        printf("\n\t\t\t\tEnter Mobile No:");
        gets(std.mobile_no);

        fflush(stdin);
        printf("\n\t\t\t\tEnter E-Mail:");
        gets(std.email);

        fflush(stdin);
        printf("\n\t\t\t\tEnter Batch:");
        gets(std.batch);

        fflush(stdin);
        printf("\n\t\t\t\tEnter Department:");
        gets(std.batch);

        fflush(stdin);
        printf("\n\t\t\t\tIf Female write F or If Male write M:");
        scanf("%s",std.gender);

        printf("\n\t\t\t\tEnter Date of Birth:");
        scanf("%s",std.date_of_birth);

        fwrite(&std,sizeof(std),1,file);

    }
    if(check==1)
    {
        printf("\n\t\tRecord was changed successfully.\n");
    }
    printf("\n");
    system("pause"); //Make the screen wait for a key press.



}

void display_student()
{
    print_title();
    saved_data();
    node *c=head;
    if(head!=NULL)
    {
        printf("\n\nSTUDENT NAME\t\tID\t\tMobile_No\t\t   E-Mail\t\t\t     Date-of-Birth\tBatch\tDepartment\t\n\n");
        printf("---------------------------------------------------------------------------------------------------------------------------------\n\n");

    }
    while(c!=NULL)
    {
        printf("%s\t\t%s\t%s\t\t%s\t      %s\t %s \t %s\t\n",c->name,c->id,c->mobile_no,c->email,c->date_of_birth,c->batch,c->dept);
        c=c->next;
    }

    printf("\n\nTotal Female Student: %d && Total Male Student: %d.\n",f,m);
    printf("\n");
    system("pause"); //Make the screen wait for a key press.

}

void delete_records(){

    print_title();
    char id1[100];
    FILE *tmp;
    if((tmp=fopen("tmp.txt","wb+"))==NULL)
    {
        printf("\n\t\tCan not be opened");

    }
    printf("\n\t\tEnter Student ID that to be delete:");
    scanf("%s",id1);
    int check=0;
    rewind(file); //move file position indicator to the beginning

    while((fread(&std,sizeof(std),1,file))==1)
    {
        if(strcmp(std.id,id1)==0)
        {
            check=1;
        }
        else
        {
            fwrite(&std,sizeof(std),1,tmp);
        }

    }
    fclose(file);
    fclose(tmp);
    remove("sectiong.txt"); //the file to delete
    rename("tmp.txt","sectiong.txt"); //rename the file
    if((file=fopen("sectiong.txt","rb+"))==NULL)
    {
        printf("Can not be opened.");

    }
    if(check==1)
    {
        printf("\n\t\tThe record has been deleted successfully.\n");
    }
    if(check==0)
        printf("\n\t\t\tERROR!!Record Not Found..\n");

    printf("\n");
    system("pause"); //Make the screen wait for a key press.

}

void search_record(){

    print_title();
    saved_data();

    char flag='y';
    do
    {
        node *c=head,*temp=NULL;
        char id1[100];
        printf("\n\t\t\tEnter Student ID:");
        scanf("%s",id1);
        printf("\n");
        while(c!=NULL)
        {
            if(strcmp(c->id,id1)==0)
            {
                temp=c;
                break;
            }
            c=c->next;
        }
        if(temp==NULL)
            printf("\t\tRecord Not found!!!\n\n");
        else
        {

            printf("\n\t\tStudent\tName: %s\n",temp->name);
            printf("\n\t\tStudent\tID: %s\n",temp->id);
            printf("\n\t\tStudent\tBatch: %s\n",temp->batch);
            printf("\n\t\tStudent\tDepartment: %s\n",temp->dept);
            printf("\n\t\tStudent\tMobile_N0: %s\n",temp->mobile_no);
            printf("\n\t\tStudent\tE-mail: %s\n",temp->email);

            printf("\n\t\tGender\t: %s\n",temp->gender);
            printf("\n\t\tDate of Birth\t: %s\n\n\n",temp->date_of_birth);



        }
        getchar(); //For clearing the input buffer
        printf("Do you want to search more (Y/N) :");
        scanf("%c",&flag);

    }
    while(flag=='y'||flag=='Y');

    printf("\n");
    system("pause"); //Make the screen wait for a key press.


}



int main()
{

    if((file=fopen("sectiong.txt","rb+"))==NULL)
    {
        if((file=fopen("sectiong.txt","wb+"))==NULL)
        {
            printf("The file can not be opened\n");
        }
    }

/*
    f1=fopen("password.txt","r");
    fscanf(f1,"%s",&rtrv);

    intro();
*/
    while(1)
    {


        int press;
        printf("\n");
        print_title();

        printf("\t\t\t\t\t\t1. Add New Records\n\n");
        printf("\t\t\t\t\t\t2. Display all Students Records\n\n");
        printf("\t\t\t\t\t\t3. Delete Records\n\n");
        printf("\t\t\t\t\t\t4. Search and View Records\n\n");
        printf("\t\t\t\t\t\t5. Modify Records\n\n");
      //printf("\t\t\t\t\t\t6. Change Password\n\n");
        printf("\t\t\t\t\t\t7. Exit\n\n");

        int choice;
        printf("\n\t\t\t\t\t\tEnter Option:--> ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:

        {
            addrecord();

        }
        break;
        case 2:

        {
            display_student();

        }
        break;
        case 3:
        {
            delete_records();
        }
        break;
        case 4:

        {
            search_record();

        }
        break;

        case 5:

        {
            modify_data();
        }
        break;
        /*case 6:
        {
            change_password();
        }
       */ break;
        case 7:

        {
            system("cls");
            exit(0);

        }
        break;
        default:
        {
            printf("Wrong Input.. END!!\n");

        }
        }
    }

    return 0;

}