 /*
1->Reading/appendingl

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp = NULL;
    // char ch = 'a';
    char str[100];
    fp = fopen("check.txt", "a");

    if (fp == NULL)
    {
        printf("\nNo file here");
        exit(0);
    }

    printf("\nEnter the string:\n");
    gets(str);

    //  fputs(str, fp);
    fprintf(fp, "\n%s", str);
    printf("Successfully Appended String\n");
    fclose(fp);
}