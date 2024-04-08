#include <stdio.h>

void insertionOfArray(int arr[], int size);
void printOfArray(int arr[], int size);
int sumOfArrayElements(int arr[], int size);

int main()
{
    int arr[100];
    int size;
    printf("How many Elements Do you want to Enter in the array : ");
    scanf("%d", &size);
    insertionOfArray(arr, size);
    printOfArray(arr, size);
    sumOfArrayElements(arr, size);

    return 0;
}
void insertionOfArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printOfArray(int arr[], int size)
{
    printf("The Elements that You have entered : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int sumOfArrayElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nThe Sum of array Elements are = %d ", sum);

    return 0;
}
