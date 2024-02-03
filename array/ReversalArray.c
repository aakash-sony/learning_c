#include <stdio.h>

void reversalOfArray(int arr[], int size);

int main()
{
    int size;
    int arr[100];
    printf("How many elements do you want to Enter in the Array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe Elements that you have entered are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    reversalOfArray(arr, size);
    return 0;
}
void reversalOfArray(int arr[], int size)
{
    printf("The Reversal Of Array is : ");
    for (int i=size-1; i>=0; i--)
    {
        
        printf("%d ", arr[i]);
    }
}
