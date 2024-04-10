#include <stdio.h>
int main()
{
    int arr[20], n, i, j, element;
    printf("Enter the array size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element that you want to delete: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            for (n--, j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            i--;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}