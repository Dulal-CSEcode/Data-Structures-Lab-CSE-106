#include<stdio.h>

int main()
{
    int arr[100], i, n,index;
    printf("Enter number you want");
    scanf("%d",&n);
    printf("Enter array size\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

        printf("the search element=");
         scanf("%d",&index);

       for(i=0; i<n; ++i)

    if(arr[i]==index)
         break;



         if(i<n)
          printf("linera search index%d",i);

           else
            printf("no found ");

         return 0;
}

