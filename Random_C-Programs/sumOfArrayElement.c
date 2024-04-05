#include<stdio.h>

void initializeArray(int arr[],int size);
void sumOfArrayElements(int arr[],int size);

int main()
{
  int size,arr[20];

  printf("Enter the Array Size: ");
  scanf("%d",&size);

  initializeArray(arr,size);
  sumOfArrayElements(arr,size);

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

void sumOfArrayElements(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum= sum+arr[i];
    }
    printf("The Sum of array elements=%d",sum);
}
