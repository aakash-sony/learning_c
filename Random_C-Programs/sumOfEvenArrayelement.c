#include<stdio.h>

void sumOfEvenArrayElement(int arr[],int size);
void initializeArray(int arr[],int size);

int main()
{
    int size,arr[20];

    printf("Enter the Array Size: ");
    scanf("%d",&size);

    initializeArray(arr,size);
    sumOfEvenArrayElement(arr,size);


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

void sumOfEvenArrayElement(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("The sum of even elements of the Array=%d",sum);
}
