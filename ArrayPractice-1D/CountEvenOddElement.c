#include<stdio.h>
int main()
{
    int arr[30],i,size,countE=0,countO=0;
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
            countE++;
        }
        else
        {
            countO++;
        }
    }
    printf("Total Even Elements are: %d",countE);
    printf("\nTotal Odd elements are: %d",countO);
    return 0;
}