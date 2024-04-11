#include <stdio.h>

void largestNumberOfArray(int arr[], int size);
void smallestNumberOfArray(int arr[], int size);
void insertElementAtNposition(int arr[], int size);
void deleteElementAtNpositiion(int arr[], int size);

int main()
{
    int size, arr[50];
    printf("Enetr the Array Size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largestNumberOfArray(arr, size);

    smallestNumberOfArray(arr, size);

    insertElementAtNposition(arr, size + 1);

    deleteElementAtNpositiion(arr, size);

    return 0;
}

void largestNumberOfArray(int arr[], int size)
{
    int largestNum, i;
    largestNum = arr[0];

    for (i = 0; i < size; i++)
    {
        if (largestNum < arr[i])
        {
            largestNum = arr[i];
        }
    }
    printf("\nThe Largest Number of the array is %d ", largestNum);
}

void smallestNumberOfArray(int arr[], int size)
{
    int smallestNum, i;
    smallestNum = arr[0];

    for (i = 0; i < size; i++)
    {
        if (smallestNum > arr[i])
        {
            smallestNum = arr[i];
        }
    }
    printf("\nThe SmallestNum of the Array is %d ", smallestNum);
}

void insertElementAtNposition(int arr[], int size)
{
    int position, insertedElement, i;
    printf("\nAt which Position you want to insert the Element: ");
    scanf("%d", &position);
    printf("\nEnter the value of Element Which you want to insert: ");
    scanf("%d", &insertedElement);

    for (i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = arr[position - 1];
    arr[position - 1] = insertedElement;

    printf("The updated Array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void deleteElementAtNpositiion(int arr[], int size)
{
    int position, i, value = 0;
    printf("\nAt which position do you want to delete the Element: ");
    scanf("%d", &position);
    // 2,3,4,5,6
    for (i = position - 1; i <= size; i++)
    {
        if (position < size)     // 5,3
            arr[i] = arr[i + 1]; // i=3 ==>arr[2]=arr[3]
        value++;                 // i=4 ==>arr[3]=arr[4]
    }                            //
    if (value == 0)
        printf("\nThis Position is not available in the Array");
    else
    {
        printf("The Updated Array is: ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
