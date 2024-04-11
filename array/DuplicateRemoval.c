#include <stdio.h>

void duplicateArrayElements(int arr[], int size);

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

    duplicateArrayElements(arr, size);
    return 0;
}
void duplicateArrayElements(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return size;
    }

    int index = 0;

    for (int i = 1; i < size; i++)
    {

        if (arr[i] != arr[index])
        {
            index++;
            arr[index] = arr[i];
        }
    }

    return index + 1;
}

//[4, 7, 3, 5, 4, 9, 7]

/*
    i =1; 1< 7; => 7 != 4
    index = 1; arr[1] = 7

    i =2; 2<7 => 3 != 7
    index = 2; arr[2] = 3

    i =3; 3<7 => 5 != 3
    index = 3; arr[3] = 5

    i =4; 4<7 => 4 != 5
    index = 4; arr[4] = 4

*/
