#include<stdio.h>

int main()
{
    int size,i,arr[40];
    printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The Array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\nThe Reverse array is: ");
    for(i=size-1;i>=0;i--)
    {
        printf("%d,",arr[i]);
    }
    return 0;

}