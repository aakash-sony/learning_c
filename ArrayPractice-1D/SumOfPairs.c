/* Total number of pairs in the array whoose sum is equal to a given number*/
#include <stdio.h>

void initializeArray(int arr[], int n);
void printingArray(int arr[], int n);
void checkTotalPairs(int arr[], int n);

int main()
{
    int arr[20], n;
    printf("How many elements do you want to enter: ");
    scanf("%d", &n);
    initializeArray(arr, n);
    printingArray(arr, n);
    checkTotalPairs(arr, n);

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
void checkTotalPairs(int arr[], int n)
{
    int count = 0, value;
    printf("\nEnter the value of sum for finding the pairs: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++) // 16{3,5,11,5,13,5}
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j] == value)
            {
                count++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    if (count == 0)
    {
        printf("\nNot found any Pairs.");
    }
    else
    {
        printf("\n%d Pairs found whoose sum is equal to %d", count, value);
    }
}
