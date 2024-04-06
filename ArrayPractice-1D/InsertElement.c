#include<stdio.h>
int main()
{
    int size,i,arr[30];
    printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    int element,position;
    printf("Enter the value of the element which you want to insert: ");
    scanf("%d",&element);
    printf("At which Position do you want to insert the element: ");
    scanf("%d",&position);
     for(i=size;i>=position-1;i--)//5,4,3
     {
        arr[i]=arr[i-1];       //arr[6]=arr[5],arr[5]=arr[4],
        arr[position-1]=element;
     }
     printf("The array after updation: ");
     for(i=0;i<size+1;i++)
     {
        printf("%d,",arr[i]);
     }
     return 0;
}