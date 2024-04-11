#include <stdio.h>

void searchOfElement(int arr[], int size);

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

    searchOfElement(arr, size);

    return 0;
}

void searchOfElement(int arr[], int size)
{
    int element, i;
    int count =0; 
  printf("\nWhich Elements do you want to search? : ");
    scanf("%d", &element);

    for (i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            printf("Number is available ");
            break;
        }
    }
    if (arr[i]!=element)
    printf("Number is not available");
        if (arr[i] == element)
        {
            count++;
            printf("%d found at index %d.", arr[i], i);
            break;
        }
    }
    if (count == 0)
        printf("Number is not available");

}