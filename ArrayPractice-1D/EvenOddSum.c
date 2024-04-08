#include<stdio.h>
int main()
{
    int size,i,arr[30],sumEven=0,sumOdd=0;
    printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            sumEven=sumEven+arr[i];
        }
        else
        {
            sumOdd=sumOdd+arr[i];
        }
    }
    printf("\nThe Sum of even elementd is: %d",sumEven);
    printf("\nThe Sum of odd elements is: %d",sumOdd);
    return 0;
}