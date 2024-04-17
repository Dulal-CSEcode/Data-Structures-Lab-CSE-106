#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    // Let's start here
    int f, g, flag = 0;
    int a[] = {7, 5, 3, 9, 4, 6};
    int size = sizeof(a) / sizeof(a[0]);
    // printf("%d ", size);
    print(a, size);
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        int max = i;
        for (int j = i + 1; j < size; j++)
        {

            if (a[j] < a[max])
            {
                max = j;
            }
        }
        if (i != max)
        {
            swap(&a[max], &a[i]);
            print(a, size);
            printf("\n");
        }
    }
    printf("\nEnter sum num:\n");
    int s;

    scanf("%d", &s);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (s == a[i] + a[j])
            {
                f = a[i];
                g = a[j];
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("\nNot Found sum value.\n");
    }
    else
    {
        printf(" addagu = %d addend= %d", f, g);
    }

    return 0;
}
/*
7 5 3 9 4 6
3 5 7 9 4 6
3 4 7 9 5 6
3 4 5 9 7 6
3 4 5 6 7 9
*/