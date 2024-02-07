// C program for insertion sort
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	 int arr[100],i,j,n,pos,value;
    printf("Enter number you want=");
    scanf("%d",&n);
    printf("\nEnter Array element\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("The sorted Elemen is\n");
       for (i = 0; i < n; i++)
       {
       insertionSort(arr, n);

		printf("%d ", arr[i]);
       }
	printf("\n");

	return 0;
}
