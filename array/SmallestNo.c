#include <stdio.h>

void smallestNoOfArray(int arr[], int size);

int main()
{
    int size, i;
    int arr[50];
    printf("How many Elements do you want to enter in the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    smallestNoOfArray(arr, size);

    return 0;
}
void smallestNoOfArray(int arr[], int size)
{
    int smallestNo;
    smallestNo = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (smallestNo > arr[i])
            smallestNo = arr[i];
    }
    printf("The Smallest no. of the Array is %d", smallestNo);
}