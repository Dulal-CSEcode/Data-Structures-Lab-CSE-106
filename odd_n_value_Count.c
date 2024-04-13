#include <stdio.h>
int find(int *a, int n);
int main()
{
    int a[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int odd = find(a, n);
    printf("%d ", odd);
    return 0;
}

int find(int *a, int n)
{
    int i, res = 0;
    for (i = 0; i < n; i++)
        res = res ^ a[i]; // 1, 2, 3, 2, 3, 1, 3
    // printf("%d \n", res);

    return res;
}