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
    {
      //  printf("%d ", a[i]);
        if (a[i] == can)
        {
            count++;
        }
        printf(" %d\n\n", count);
        if (count > n / 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}