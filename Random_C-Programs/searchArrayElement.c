#include <stdio.h>

void serachArrayElement(int arr[], int size);
void initializeArray(int arr[], int size);

int main()
{
    int size, arr[20];

    printf("Enter the array size: ");
    scanf("%d", &size);

    initializeArray(arr, size);

    serachArrayElement(arr, size);

    return 0;
}

void initializeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)

    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void serachArrayElement(int arr[], int size)
{
    int count = 0, i, num;

    printf("Enter the number which do you want to search: ");
    scanf("%d", &num);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
            break;
        }
    }
    if (count != 0)
        printf("The entered number is available at index arr[%d] ",i);
    else
        printf("The number is not available.");
}
