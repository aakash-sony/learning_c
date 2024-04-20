#include <stdio.h>

int arraySum(const int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
void arrayInitialize(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int a[50], n;
    printf("Enter array size: ");
    scanf("%d", &n);
    arrayInitialize(a, n);
    int s = arraySum(a, n);
    printf("Sum=%d", s);

    return 0;
}