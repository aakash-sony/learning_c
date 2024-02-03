#include <stdio.h>

void AverageOfArray(int arr[], int size);
void insertionOfElements(int arr[], int size);
void printArrayElements(int arr[], int size);

int main()
{
    int size, arr[50];
    printf("How many elements do you want to inter in the Array : ");
    scanf("%d", &size);

    insertionOfElements(arr, size);

    printArrayElements(arr, size);

    AverageOfArray(arr, size);

    return 0;
}

void AverageOfArray(int arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum= sum+ arr[i];
    }
    float average=(float)(sum/size);
    printf("\nThe Average of array Elements is : %f", average);
}

void insertionOfElements(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArrayElements(int arr[], int size)
{
    printf("\nThe Elements that you have entered : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}