
#include <stdio.h>

int linear_search(int arr[], int n,int index) {
   int i;

   for (i = 0 ;i < n ; i++ ) {
      if (arr[i] == index)
         return i;
   }

   return -1;
}

int main()
{
   int arr[100], search, i, n, position;

   printf("Input number of elements in array\n");
   scanf("%d", &n);

   printf("Input %d numbers=", n);

   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

   printf("Input a number to search:");
   scanf("%d", &search);

   position = linear_search(arr, n, search);

   if (position == -1)
      printf("not found");
   else
      printf(" Element found at location= %d\n", position);

   return 0;
}

