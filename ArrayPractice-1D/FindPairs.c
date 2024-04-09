#include <stdio.h>
int main()
{
    int n, i, j, sum, arr[30], count = 0;
    printf("Enter the Array Size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe Array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the Sum for finding the Pairs: ");
    scanf("%d", &sum);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                count++;
                printf("\n(%d,%d)", arr[i], arr[j]);
            }
        }
    }
    if (count == 0)
    {
        printf("\nPairs is not available.");
    }
    return 0;
}