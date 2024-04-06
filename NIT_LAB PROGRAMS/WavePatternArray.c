#include <stdio.h>
int main()
{
    int n, i, temp, arr[30];
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
    printf("\n");
    for (i = 0; i < n - 1; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}