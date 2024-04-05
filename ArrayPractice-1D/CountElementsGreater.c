/*Count the number of elements in given array greater than a given number*/
#include <stdio.h>
void initializeArray(int arr[], int n);
void printingArray(int arr[], int n);
void comparingCountElement(int arr[], int n);

int main()
{
    int arr[20], n;
    printf("How many elements do you want to enter: ");
    scanf("%d", &n);
    initializeArray(arr, n);
    printingArray(arr, n);
    comparingCountElement(arr,n);

    return 0;
}
void initializeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printingArray(int arr[], int n)
{
    printf("\nThe Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void comparingCountElement(int arr[], int n)
{
    int value, count = 0;
    printf("\nEnter the value of element for comparing other elements: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > value)
        {
            count++;
        }
    }
    printf("\nTotal %d numbers are greater than %d.", count, value);
}