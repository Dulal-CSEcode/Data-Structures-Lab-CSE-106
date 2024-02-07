/*
findcandidate(array,int size)
1.Initialized index and count majority element
maj_index=0,count=1
2.Loop for i=1 to size-1
(a)if arr[maj_index]==arr[i]
    count++
(b)
else
    count--
(c)if count==0
maj_index=i
count=1
3. return arr[maj_index]
Example A[]=2,2,3,5,2,2,6
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printMajority(int a[], int n);
int findcandidate(int a[], int n);
bool isMajority(int a[], int n, int can);

// Using moore's Voting Algorithm
int main()
{
    // int a[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int a[] = {1, 3, 3, 1, 2};
    // int a[] = {2, 2, 3, 5, 2, 2, 6};
    int n = sizeof(a) / sizeof(a[0]);

    printf("%d\n", n);
    printMajority(a, n);

    return 0;
}
void printMajority(int a[], int n)
{
    int can = findcandidate(a, n);
    if (isMajority(a, n, can))
        printf("%d  ", can);
    else
        printf("NO majority Element\n");
}
int findcandidate(int a[], int n)
{
    int maj_i = 0, count = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[maj_i] == a[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            maj_i = i;
            count = 1;
        }
    }
    printf("findcandidate is= %d\n", a[maj_i]);
    return a[maj_i];
}
bool isMajority(int a[], int n, int can)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
        if (a[i] == can)
            count++;
    if (count > n / 2)
        // {
        // printf("count %d>%d/2\n\n",count,n);
        return 1;
    //}

    else
        return 0;
}