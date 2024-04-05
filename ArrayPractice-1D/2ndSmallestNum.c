#include<stdio.h>
int main()
{
    int n,i,temp,j,arr[20];
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp; 
            }
        }
    }
    
    printf("\nSecond smallest Element is : %d",arr[1]);
    
return 0;    
}