#include<stdio.h>

int main()
{
    int arr[30],size,sum=0,i;
    printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEntered Array Elements are: ");
    for(i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
        sum=sum+arr[i];
    }
    printf("\nSum of Array Elements is : %d",sum);
    return 0;
}