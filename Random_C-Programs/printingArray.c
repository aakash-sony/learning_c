#include<stdio.h>

void initializeArray(int arr[],int size);
void printingArray(int arr[],int size);

int main()
{
    int size,arr[10];
    printf("Enter the Array Size: ");
    scanf("%d",&size);

    initializeArray(arr,size);
    printingArray(arr,size);

    return 0;
    
}
void initializeArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void printingArray(int arr[],int size)
{
    printf("The Array is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}