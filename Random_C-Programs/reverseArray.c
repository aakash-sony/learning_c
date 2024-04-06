#include <stdio.h>

void reverseArray(int arr[], int size);
void initializeArray(int arr[], int size);

int main()
{
    int arr[20], size;

    printf("Enter the Array Size: ");
    scanf("%d", &size);

    initializeArray(arr, size);
    reverseArray(arr, size);

    return 0;
}

void initializeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void reverseArray(int arr[], int size)
{
    printf("The array after reverse: ");

    for (int i = size - 1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}