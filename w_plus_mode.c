/*
W+ is
1->Reading/writing mode
2->Create a new file
4->file exist then erase the previous content
write new content?
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp = NULL;
    // char ch = 'a';
    char str[100];
    fp = fopen("check.txt", "w+");

    if (fp == NULL)
    {
        printf("\nNo file here");
        exit(0);
    }

    printf("\nEnter the string:\n");
    gets(str);
    fputs(str, fp);
    rewind(fp);
    while (!feof(fp))
    {
        fgets(str, 100, fp);
        printf("%s ", str);
    }

    fclose(fp);
}