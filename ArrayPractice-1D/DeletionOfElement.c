#include <stdio.h>
int main()
{
    int size, i, arr[20], pos;
    printf("Enter the array size: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe Array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("From which position do you want to delete the element: ");
    scanf("%d", &pos);
    if (pos > 0 && pos <= size)
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("\nThe Updated Array is: ");
        for (i = 0; i < size; i++)
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