#include <stdio.h>

void initializeArray(int arr[], int n);
void printingArray(int arr[], int n);
void countPrimeElement(int arr[], int n);

int main()
{
    int arr[20], n;
    printf("How many elements do you want to enter: ");
    scanf("%d", &n);
    initializeArray(arr, n);
    printingArray(arr, n);
    countPrimeElement(arr, n);
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
void countPrimeElement(int arr[], int n)
{
    int count = 0, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                break;
            }
        }
        if (arr[i] == j)
        {
            count++;
            printf("%4d", arr[i]);
        }
    }
    printf("\nTotal %d Prime number.", count);
}
