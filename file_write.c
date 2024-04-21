#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp = NULL;
    //char ch = 'a';
    char str[100];
    fp = fopen("check.txt", "w");
    
    if (fp==NULL)
    {
        printf("\nNo file here");
        exit(0);
    }

    printf("\nEnter the string:\n");
    gets(str);

    fputs(str, fp);
    fclose(fp);
}