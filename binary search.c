#include<stdio.h>
int main()
{
    int arr[100],i,n;
    int left,right,mid,x;
    printf("Enter number you want:");
    scanf("%d",&n);
    printf("Enter array element:");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
        printf("The search value:");
        scanf("%d",&x);
        {

    left=0;
    right=n-1;
     mid=(left+right)/2;

    while(left<=right)
    {
      if(arr[mid]<x)


              left=mid+1;
         else if(arr[mid]==x)
         {

           printf("Binary search=%d",x,mid+1);
           break;
    }


        else
        right=mid-1;
         mid=(left+right)/2;
    }
         if(left>right)
            printf("not found this value",x);
    return 0;


}
}


