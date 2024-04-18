#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Let's start here
    FILE *fp = NULL;
    char str[100];

    fp = fopen("read.txt", "r");
    if (fp == NULL)
    {
        printf("\nNO File here!\n");
        exit(0);
    }
    // while (!feof(fp))
    //
    //     str = fgets(fp);
    //     fprintf(fp, "%s", str);
    // }
    while (!feof(fp))
    {
        fgets(str, 100, fp);
        printf("%s ", str);
    }

    // fgets(str, 100, fp);
    // printf("%s ", str);

    fclose(fp);

    return 0;
}