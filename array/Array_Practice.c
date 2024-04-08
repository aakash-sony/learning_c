#include <stdio.h>

void insertionOfElements(int arr[], int size);
void printArrayElements(int arr[], int size);
int sumOfElements(int arr[], int size);

int main()
{
    int arr[50], size;
    int sum;
    printf("How many Elements do you want to insert in the Array: ");
    scanf("%d", &size);
    insertionOfElements(arr, size);
    printf("The Elements that you have Entered are: ");
    printArrayElements(arr, size);
    sumOfElements(arr,size);
    

    return 0;
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
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int sumOfElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum Of Elements is: %d",sum);
    return 0;
}
