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
    int a[] = {7, 5, 3, 9, 4, 6};
    int size = sizeof(a) / sizeof(a[0]);
    // printf("%d ", size);
    print(a, size);
    printf("\n");
    for (int i = 0; i < size ; i++)
    {
        for (int j = i + 2; j < size; j++)
        {

            if (j == i + 2)
            {
                swap(&a[j], &a[i]);
                print(a, size);
                printf("\n");
                continue;
            }
        }
    }

    return 0;
}
/*
7 5 3 9 4 6  
3 5 7 9 4 6  
3 9 7 5 4 6  
3 9 4 5 7 6  
3 9 4 6 7 5  

*/