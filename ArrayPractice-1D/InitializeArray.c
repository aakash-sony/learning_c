#include<stdio.h>
int main()
{
    int arr[30],size,i;

    printf("How many elements do you want to enter?: ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    return 0;
}