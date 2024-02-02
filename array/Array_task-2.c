#include <stdio.h>

void insertionOfElements(int arr[], int size);
void printArrayElements(int arr[], int size);

int main()
{
    int size;
    int position, insertedElement;
    int arr[100];
    printf("How many Elements Do you want to enter in the Array? :");
    scanf("%d", &size);
    insertionOfElements(arr, size);
    printArrayElements(arr, size);
    printf("\nThe value of Element Which do you want to enter?: ");
    scanf("%d", &insertedElement);
    printf("\nAt which Position Do you want to enter the Elements in the Array?: ");
    scanf("%d", &position);
    for (int i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = insertedElement;
    printf("The Updated Array : \n");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
void insertionOfElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d Element :", (i + 1));
        scanf("%d", &arr[i]);
    }
}
void printArrayElements(int arr[], int size)
{
    printf("The Elements you have Entered are : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
