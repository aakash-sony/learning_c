#include <stdio.h>

int multiplyOfArrayElements(int arr[], int size);
int averageOfArrayElements(int arr[], int size);
void searchElementsOfArray(int arr[], int size);
void reversalArray(int arr[], int size);

int main()
{
    int size, arr[50];

    printf("Enter Array Size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The Multiplication of all Element is : %d\n", multiplyOfArrayElements(arr, size));

    printf("The Average Of All Elements is : %d\n", averageOfArrayElements(arr, size));

    searchElementsOfArray(arr, size);

    reversalArray(arr, size);

    return 0;
}

int multiplyOfArrayElements(int arr[], int size)
{
    int multiply = 1;
    for (int i = 0; i < size; i++)
    {
        multiply = multiply * arr[i];
    }
    return multiply;
}
int averageOfArrayElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum / size;
}

void searchElementsOfArray(int arr[], int size)
{
    int element, i;
    printf("\nWhich Elements do you want to search: ");
    scanf("%d", &element);
    for (i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            break;
        }
    }
    if (element == arr[i])
    {
        printf("The element is avaiable at index %d\n", i);
    }
    else
    {
        printf("The element is not available in the Array\n");
    }
}

void reversalArray(int arr[], int size)
{
    printf("\nThe Reversal Of Array is: ");

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
