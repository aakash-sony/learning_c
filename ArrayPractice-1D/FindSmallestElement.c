#include<stdio.h>
int main()
{
    int arr[40],i,size,smallestElement;
     printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    smallestElement=arr[0];
    for(i=0;i<size;i++)
    {
        if(smallestElement>arr[i])
        {
            smallestElement=arr[i];
        }
    }
    printf("The smallest element of the array: %d",smallestElement);
    return 0;
}