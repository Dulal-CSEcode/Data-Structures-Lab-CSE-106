// Binary Search in C

#include <stdio.h>
#define max 5
int binarySearch(int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = (low + high) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
 {
   int array[100],i;
    int low,high,mid,x;
    printf("Enter array element:");
    for(i=0; i<max; i++)
        scanf("%d",&array[i]);
        printf("The search value:");
        scanf("%d",&x);
  int result = binarySearch(array, x, 0, max);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}
