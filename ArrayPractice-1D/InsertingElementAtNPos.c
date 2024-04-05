#include<stdio.h>
int main()
{
   int arr[30],size,i,element,pos;
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
    }
    printf("\nEnter the value of element which you want to insert: ");
    scanf("%d",&element);
    printf("At which position do you want to insert the element: ");
    scanf("%d",&pos);
    for(i=size-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=element;
    size++;
    printf("\nUpdated Array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}