// #include<stdio.h>
// int main()
// {
//     int cost[10][10],visited[10]={0},i,j,n,no_e=1,min,a,b,min_cost=0;
//     printf("Enter number of nodes ");
//     scanf("%d",&n);
//     printf("Enter cost in form of adjacency matrix\n");
//     //input graph
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             scanf("%d",&cost[i][j]);
//             // cost is 0 then initialize it by maximum value
//             if(cost[i][j]==0)
//               cost[i][j]=1000;
//         }
//     }
    
//     // logic for finding minimum cost spanning tree
//     visited[1]=1; // visited first node
//     while(no_e<n)
//     {
//         min=1000;
//         // in each cycle find minimum cost 
//         for(i=1;i<=n;i++)
//         {
//             for(j=1;j<=n;j++)
//             {
//                 if(cost[i][j]<min)
//                 {
//                     if(visited[i]!=0)
//                     {
//                         min=cost[i][j];
//                         a=i;
//                         b=j;
//                     }
//                 }
//             }
//         }
//         //if node is not visited
//         if(visited[b]==0)
//         {
//             printf("\n%d to %d  cost=%d",a,b,min);
//             min_cost=min_cost+min;
//             no_e++;
//         }
//         visited[b]=1;
//         // initialize with maximum value you can also use any other value
//         cost[a][b]=cost[b][a]=1000; 
//     }
//     printf("\nminimum weight is %d",min_cost);
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
int a[10][10], v[10] = {0}, i, j, c, b, min, min_cost = 0, n, e = 1;
int main()
{
    printf("\nEnter the nodes:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j] == 0)
            {
                a[i][j] = 100;
            }
        }
    }
    printf("\nPrint the array is:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%10d", a[i][j]);
        }
        printf("\n");
    }

    v[1] = 1;
    while (e < n)
    {
        min = 100;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (a[i][j] < min)
                {
                    if (v[i] != 0)
                    {
                        min = a[i][j];
                        c = i;
                        b = j;
                    }
                }
            }
        }
        if (v[b] == 0)
        {
            printf(" %d to %d  mini %d\n", c, b, min);
            min_cost += min;
            e++;
        }
        v[b] = 1;
        a[c][b] = a[b][c] = 100;
    }
    printf("\nmin cost is = %d", min_cost);
    return 0;
}
/*


5
0 2 7 4 0
2 0 8 0 3
7 8 0 4 1
4 0 4 0 4
0 3 1 4 0
*/