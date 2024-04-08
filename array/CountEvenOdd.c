#include <stdio.h>

void countEvenOdd(int arr[], int size);

int main()
{
    int size, i;
    int arr[50];
    printf("How many elements do you want to enter? : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe Elements that you have entered are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    countEvenOdd(arr, size);
    return 0;
}
void countEvenOdd(int arr[], int size)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The total Even elements in the array is %d\n", even);
    printf("The total Odd elements in the array is %d", odd);
}

