#include <stdio.h>
#include <stdlib.h>

int adj[10][10], i, j, n, edges;

int main()
{
    // Let's start here
    printf("\nEnter no of nodes:\n");
    scanf("%d", &n);
    printf("\nEnter the no of edges:\n");
    scanf("%d", &edges);
    int a, b;
    for (i = 0; i <edges; i++)
    {
        scanf("%d%d", &a, &b);
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    printf("\nPrint the Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d ", adj[i][j]);
        }
    }

    return 0;
}