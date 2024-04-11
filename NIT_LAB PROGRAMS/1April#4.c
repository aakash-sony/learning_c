#include<stdio.h>
int main() 
{
    int n,min,i,arr[20];
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The Array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("\nMin= %d",min);
    
    return 0;
}