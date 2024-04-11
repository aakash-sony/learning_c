#include<stdio.h>
int main()
{
    int arr[20],n,i,j,count=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is: ");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe unique elements are: ");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {                       
            if(arr[i]==arr[j]) 
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",arr[i]);
        }
    }
        return 0;
}