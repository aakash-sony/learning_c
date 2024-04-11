#include <stdio.h>

void largestElementsOfArray(int arr[], int size);

int main()
{
    int size;
    int i, arr[100];
    printf("How many Elements Do you want to enter in the array : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d Element ", i + 1);
        scanf("%d", &arr[i]);
    }
    largestElementsOfArray(arr, size);

    return 0;
}
void largestElementsOfArray(int arr[], int size)
{
    int largestNo;
    largestNo = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (largestNo < arr[i])
            largestNo = arr[i];
    }
    printf("The Largest no. of the Array : %d ", largestNo);
}
