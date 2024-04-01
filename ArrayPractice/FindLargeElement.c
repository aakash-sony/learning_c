#include<stdio.h>
int main()
{
    int size,i,arr[40],largestElement;
     printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    largestElement=arr[0];
    for(i=1;i<size;i++)
    {
        if(largestElement<arr[i])
        {
            largestElement=arr[i];
        }
    }
    printf("The largest number of Array is: %d",largestElement);
     return 0;
}