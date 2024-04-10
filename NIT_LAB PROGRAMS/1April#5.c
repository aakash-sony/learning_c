#include<stdio.h>
int main()
{
    int n,arr[20],i,max;
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
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nMax=%d",max);
    return 0;
}