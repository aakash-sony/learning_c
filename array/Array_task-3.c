#include <stdio.h>

void insertionOfElements(int arr[], int size);
void printArrayElements(int arr[], int size);
void deletionElementOfArraybyIndex(int arr[], int size);
void deletionElementOfArraybyValue(int arr[], int size);

int main()
{
    int size;
    int arr[100];
    int position;
    printf("How many Elements Do you want to enter in the Array? : ");
    scanf("%d", &size);
    insertionOfElements(arr, size);
    printArrayElements(arr, size);
     deletionElementOfArraybyIndex(arr, size);
    printArrayElements(arr, size - 1);
    deletionElementOfArraybyValue(arr, size);
    printArrayElements(arr, size - 1);

    return 0;
}
void insertionOfElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printArrayElements(int arr[], int size)
{
    printf("The Elements you have Entered are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void deletionElementOfArraybyIndex(int arr[], int size)
{
    int position, i;
    printf("At which position Do you want to delete the Element? ");
    scanf("%d", &position);

    if (position > size)
    {
        printf("No element is present at this index.");
    }
    else
    {
        for (i = position - 1; i <= size; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}
void deletionElementOfArraybyValue(int arr[], int size)
{
    int i, index = -1, number;

    printf("Enter the number to delete? ");
    scanf("%d", &number);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Number not found.");
    }
    else
    {
        if (index == size - 1)
        {
            printArrayElements(arr, size - 1);
        }
        else
        {
            for (i = index - 1; i <= size; i++)
            {
                arr[i] = arr[i + 1];
            }
        }
    }
}
