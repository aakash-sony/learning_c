#include <stdio.h>
int main()
{
    int arr[20], n, i, pos, element;
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
    printf("\nEnter the value of element to insert: ");
    scanf("%d", &element);
    printf("At which position do you want to insert ");
    scanf("%d", &pos);
    if (pos > 0 && pos <= n + 1)
    {
        for (i = n - 1; i >= pos - 1; i--) // 1,5,6,7,8
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = element;
        n++;
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("\nInvalid Position.");
    }

    return 0;
}