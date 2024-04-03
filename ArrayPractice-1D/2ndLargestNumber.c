
#include <stdio.h>

void initializeArray(int arr[], int n);
void printingArray(int arr[], int n);
void secondLargestElement(int arr[], int n);
int main()
{
    int arr[20], n;
    printf("How many elements do you want to enter: ");
    scanf("%d", &n);
    initializeArray(arr, n);
    printingArray(arr, n);
    secondLargestElement(arr,n);
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
void secondLargestElement(int arr[], int n)
{
    int max = 0, smax = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    printf("\nSecond Largest Number: %d", smax);


}

    return 0;


}