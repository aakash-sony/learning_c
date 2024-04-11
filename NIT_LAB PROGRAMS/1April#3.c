#include<stdio.h>
int main()
{
     int n,temp,i,j,arr[20];
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
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }// bubble sort, selection sort, merge sort, insertion 
    }
    printf("\nArray is in descending order: ");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}