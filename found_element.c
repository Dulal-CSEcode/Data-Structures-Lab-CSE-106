#include <stdio.h>
#include <stdlib.h>
void search(int a[][4], int n, int x);
int main()
{
    int a[4][4] = {{10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {27, 29, 37, 48},
                   {32, 33, 39, 50}};
    search(a, 4, 10);
}
void search(int a[][4], int n, int x)
{
    int i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        if (a[i][j] == x)
            printf("%d %d ", i, j);

        if (a[i][j] > x)
            j--;
        else
            i++;
    }
}