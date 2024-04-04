
#include<stdio.h>
int main()
{
    int arr[100],i,j,n,pos;
    printf("Enter number you want=");
    scanf("%d",&n);
    printf("\nEnter Array element\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);


    printf("Enter The location to delate element=");
    scanf("%d",&pos);
    for(i=pos; i<n-1;i++)
    {
        arr[i]=arr[i+1];

    }
    n=n-1;
      for(i=0;i<n;i++)

    printf("%d\n",arr[i]);

    return 0;


}
